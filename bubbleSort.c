/*
    by: z4vm
    29-06-2023
*/
#include <stdio.h>

void swap(int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void bubbleSort (int* vector,int size) {
    // iterar hasta el penultimo elemento
    for (short i = 0; i < size - 1 ; i++) {
        for (short j = 0; j < size - i - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                swap(&vector[j],&vector[j + 1]);
            }
        }
    }
}
void showVector (int* vector, int size) {
    short i = 0;
    while (i < size) {
        printf("%i - ", vector[i]);
        i++;
    }
    printf("\n");
}

int main() {
    //int vector[] = {5,3,9,4,6,0,7,1,8,2};
    int vector[] = {9,8,7,0};
    int size_vector = sizeof(vector)/sizeof(vector[0]);
    bubbleSort(vector, size_vector);
    showVector(vector, size_vector);
    return 0;
}