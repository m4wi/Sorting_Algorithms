/*
    by: z4vm
    29-06-2023
*/
#include <stdio.h>
#include <stdbool.h>

void swap (int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void selectionSort (int* vector, int size) {
    int pivot = 999;
    int min_pos = 0;
    bool finish = false;
    for (short i = 0; i < size; i++) {
        finish = false;
        pivot = 999;
        for (short j = i; j < size; j++) {
            if (pivot > vector[j]) {
                pivot = vector[j];
                min_pos = j;
            }
        }
        if (min_pos != i)
            swap(&vector[i],&vector[min_pos]);
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

int main () {
    int vector[] = {5,3,9,4,6,0,7,1,8,2};
    //int vector[] = {9,8,7,0};
    int size_vector = sizeof(vector)/sizeof(vector[0]);
    selectionSort(vector, size_vector);
    showVector(vector, size_vector);
    return 0;
}