/*
    by: z4vm
    30-06-2023
*/
#include <stdio.h>
#include <stdbool.h>

void swap (int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void insertionSort (int* vector, int size) {
    int x,y;
    for (short i = 0; i < size - 1; i++) {
        if (vector[i] > vector[i + 1]) {
            x = i;
            y = i + 1; 
            while(vector[x] > vector[y] && x >= 0){
                swap(&vector[x],&vector[y]);
                x--;
                y--;
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

int main () {
    int vector[] = {5, 6, 11, 12 ,13 };
    //int vector[] = {9,8,7,0};
    int size_vector = sizeof(vector)/sizeof(vector[0]);
    insertionSort(vector, size_vector);
    showVector(vector, size_vector);
    return 0;
}