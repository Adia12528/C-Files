#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Function executed by each thread
void *thread_function(void *arg) {
    int thread_num = *(int *)arg;
    printf("Hello from thread %d\n", thread_num);
    return NULL;
}

int main() {
    const int NUM_THREADS = 5;
    pthread_t threads[NUM_THREADS];
    int thread_ids[NUM_THREADS];

    // Create threads
    for (int i = 0; i < NUM_THREADS; i++) {
        thread_ids[i] = i + 1; // Assign thread ID
        if (pthread_create(&threads[i], NULL, thread_function, &thread_ids[i]) != 0) {
            perror("Error creating thread");
            return 1;
        }
    }

    // Join threads (wait for them to finish)
    for (int i = 0; i < NUM_THREADS; i++) {
        if (pthread_join(threads[i], NULL) != 0) {
            perror("Error joining thread");
            return 1;
        }
    }

    printf("All threads finished execution.\n");
    return 0;
}