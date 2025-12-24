#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

typedef struct {
    int a;
    int b;
} Numbers;

void* sum_thread(void* arg) {
    Numbers* nums = (Numbers*)arg;

    int* result = malloc(sizeof(int));
    if (result == NULL) {
        pthread_exit(NULL);
    }

    *result = nums->a + nums->b;

    pthread_exit(result);
}

int main() {
    pthread_t T1;
    Numbers nums;
    nums.a = 10;
    nums.b = 20;

    int* sum;

    pthread_create(&T1, NULL, sum_thread, &nums);
    pthread_join(T1, (void**)&sum);

    printf("Sum returned from thread: %d\n", *sum);

    free(sum);
    return 0;
}

