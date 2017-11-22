#include <stdio.h>

int main() {
    int number = 73;
    int *p_number = &number;
    printf("The address of the integer number %i is %p.\n", number, p_number);
    printf("Three times of the number is %i.\n", *p_number * 3);
}
