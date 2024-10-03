#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

//Put signature of hello here

int thread_count;//Number of threads, global.

int main(int argc, char *argv[]){
    
    long t_id;
    pthread_t *thread_handles;
    
    thread_count = strtol(argv[1], NULL, 10);
    thread_handles = (pthread_t*)malloc(thread_count * sizeof(pthread_t));
    
    //printf("%s \n", argv[1]);
    
    for(t_id = 0; t_id < thread_count; ++t_id){
        
        pthread_create(&thread_handles[t_id], );
    }
    
    return 0;
}
