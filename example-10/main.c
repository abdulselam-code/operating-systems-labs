#include <stdio.h>
#include <pthread.h>

// Thread T1: Thread.txt dosyasını oluşturur
void* createFile(void* arg) {
    FILE *fp = fopen("Thread.txt", "w");
    if (fp == NULL) {
        perror("T1: File creation failed");
        return NULL;
    }
    printf("T1: Thread.txt file created\n");
    fclose(fp);
    return NULL;
}

// Thread T2: Thread.txt dosyasına yazar
void* writeFile(void* arg) {
    FILE *fp = fopen("Thread.txt", "a");
    if (fp == NULL) {
        perror("T2: File open failed");
        return NULL;
    }
    fprintf(fp, "Hello its T2\n");
    printf("T2: Written to Thread.txt\n");
    fclose(fp);
    return NULL;
}

int main() {
    pthread_t T1, T2;

    // Thread T1 oluşturulur
    pthread_create(&T1, NULL, createFile, NULL);

    // T1 tamamlanmadan T2 çalışmasın
    pthread_join(T1, NULL);

    // Thread T2 oluşturulur
    pthread_create(&T2, NULL, writeFile, NULL);

    // T2 tamamlanması beklenir
    pthread_join(T2, NULL);

    return 0;
}

