#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <semaphore.h>
#include <pthread.h>


sem_t empty,full;
pthread_mutex_t mutex;
int buffer = 0;


void* producer(void* arg){
    while(1){
        sem_wait(&empty);
        pthread_mutex_lock(&mutex);
        buffer++;

        printf("producer producef : %d\n",buffer);

        pthread_mutex_unlock(&mutex);
        sem_post(&full);
        sleep(1);

    }
}


void* consumer(void* arg){
    while(1){
        sem_wait(&full);
        pthread_mutex_lock(&mutex);
        buffer--;

        printf("consumer consumed : %d \n",buffer);

        pthread_mutex_unlock(&mutex);
        sem_post(&empty);

        sleep(1);
    }
}


int main(void){
    pthread_t p,c;
    sem_init(&empty,0,3);
    sem_init(&full,0,0);
    pthread_mutex_init(&mutex,NULL);

    pthread_create(&p,NULL,producer,NULL);
    pthread_create(&c,NULL,consumer,NULL);

    pthread_join(p,NULL);
    pthread_join(c,NULL);

}