#include <stdio.h>

int main() {
    int number = 0;
    int *pointer = NULL;
    number = 10;
    printf("number's address: %p\n", &number);
    printf("number's value: %i\n\n", number);
    pointer = &number;
    printf("pointer's address: %p\n", &pointer);
    printf("pointer's size: %lu bytes\n", sizeof(pointer));
    printf("pointer's value: %p\n", pointer);
    printf("value pointed to: %i\n", *pointer);
}

