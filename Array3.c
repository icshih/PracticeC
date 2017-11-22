#include <stdio.h>

int main() {
   long multiple[] = {15L, 25L, 35L, 45L};
   long *p_m = multiple;

   for (int i = 0; i < sizeof(multiple)/sizeof(multiple[0]); i++)
       printf("Address p_m+%d (&multiple[%d]): %p *(p_m + %d) value: %lu.\n", i, i, p_m + i, i, *(p_m + i));
   printf("Type long occupies: %lu bytes.\n", sizeof(long));

   for (int i = 0; i < sizeof(multiple)/sizeof(multiple[0]); i++)
      printf("Address multiple+%d (&multiple[%d]): %p  *(multiple+%d) value: %ld.\n", i, i, multiple+i, i, *(multiple+i));
}
