#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p_number = (int *)malloc(100*sizeof(int));
    
    printf("%p\n", p_number);
}
