#include <stdio.h>
#include <string.h>

int main() {
   char multiple[] = "My Sting";

   char *p_multiple = &multiple[0];
   printf("The address of the first array element; %p.\n", p_multiple);

   p_multiple = multiple;
   printf("The address obtained from the array name: %p.\n", p_multiple);

   for (int i = 0; i < strlen(multiple); i++)
       printf("multiple[%d] = %c *(p_multiple+%d) = %c &multiple[%d] = %p p_multiple + %d = %p.\n", i, multiple[i], i, *(p_multiple + i), i, &multiple[i], i, p_multiple + i);
}
