#include <stdio.h>

// Always passing in the size of the array as a seperate argument
int sum(int *A, int size){
    int total = 0;
    printf("\nsize of *A: %d\n", sizeof(A));
    for (int i = 0; i < size; i ++) {
        total += A[i];
    }
    return total;
}

int main() {
    int A[3] = {1, 2, 3};
    int in_bounds = A[2];
    int out_of_bounds = A[4];
    A[5] = 99;
    
    printf("A[2]: %d\n", in_bounds);
    printf("size: %lu\n", sizeof(A));
    // Compilation warning, but no error. 
    // Would be whatever is already stored there in the memory address of id(A + 16).
    printf("out: %d\n", out_of_bounds); 
    // Compilation warning, may get a segmentation fault, otherwise prints 99.
    printf("A[5]: %d\n", A[5]);

    // A good practice is to #define the length of this array as a constant
    // Use that constant when creating and iterating over the array
    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i ++) {
        printf("%d ", A[i]);
        printf("(%d) ", *(A + i));
    }
    printf("sum: %d\n\n", sum(A, 3));

    // Pointers & Pointer arithmetics
    int x = 5;
    int *pt = &x;
    printf("pt: %p\n", pt);
    int *npt = pt + 1;
    printf("npt: %p\n", npt);
    printf("*pt: %d\n", *pt);
    *pt = 9;
    printf("new *pt: %d\n", *pt);

    char char_x = 5;
    char *char_pt = &char_x;
    printf("char_pt: %p\n", char_pt);
    char *char_npt = char_pt + 1;
    printf("char_npt: %p\n", char_npt);


    return 0;
}