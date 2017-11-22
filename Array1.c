#include <stdio.h>

int main() {
    char single;
    scanf("%c", &single);
    printf("char %c is located in %p.\n", single, &single);

    char multiple[10];
    scanf("%s", multiple);
    printf("String %s is located in %p.\n", multiple, &multiple);
}
