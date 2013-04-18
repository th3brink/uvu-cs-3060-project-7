// Student: Bryson Murray, Kory Kehl, James Brinkerhoff
// Instructor: John Jolly
// Class: CS 3060-001
// Project: 7
// Date: Apr 18, 2013
// Description:

#include <stdio.h>
#include <stdlib.h>
#include<pthread.h>


int count;
static pthread_mutex_t countMutex = PTHREAD_MUTEX_INITIALIZER; 

// incrementCounter
// Description: Increments count
// Return: None
// Paramaters: None
void* incrementCounter(void*);

int main ( ) {

        printf("Students:\n");
        printf("\t-James Brinkerhoff - 10621032\n");
        printf("\t-Bryson Murray - 10501259\n");
        printf("\t-Kory Kehl - 10439952\n");
        printf("Class CS 3060 - Project 7\n");

        pthread_t thread1;
        pthread_create(&thread1, NULL, &incrementCounter,NULL);
        pthread_t thread2;
        pthread_create(&thread2, NULL, &incrementCounter,NULL);
        pthread_t thread3;
        pthread_create(&thread3, NULL, &incrementCounter,NULL);
        pthread_t thread4;
        pthread_create(&thread4, NULL, &incrementCounter,NULL);
    
		pthread_join (thread1, NULL);
		pthread_join (thread2, NULL);
		pthread_join (thread3, NULL);
		pthread_join (thread4, NULL);
        printf("count: %d\n ", count);
    
        return 0;
}

void* incrementCounter( void* m )
{
        int i;
		pthread_mutex_lock(&countMutex);
        for (i = 0; i < 10/*1000000*/; ++i)	// the larger value in place of 10 was able
        {									// to demonstrate the point more clearly.
            int tempValue = count;			// using  10 it always ended in 40 anyway
            //sleep(1);
            tempValue = tempValue + 1;
            count = tempValue;
        }
		pthread_mutex_unlock(&countMutex);
        return NULL;
}

