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
    
        printf("count: %d\n ", count);
    
        return 0;
}

void* incrementCounter( void* m )
{
        int i;
        for (i = 0; i < 10; ++i)
        {
            int tempValue = count;
            sleep(1);
            tempValue = tempValue + 1;
            count = tempValue;
        }
        return NULL;
}

