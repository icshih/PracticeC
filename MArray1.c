#include <stdio.h>

int main() {
    int board[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("Address of board: %p\n", board);
    printf("Address of board[0][0]: %p\n", &board[0][0]);
    printf("but what is in board[0]: %p\n", board[0]);

    printf("Size of int: %lu\n", sizeof(int));
    printf("Size of borad: %lu\n", sizeof(board));

   for (int i = 0; i < sizeof(board)/sizeof(int); i++) {
       printf("board element %d address: %p, value: %d\n", i, *board+i, *(*board+i));
   }

   printf("===\n");
   int *p_b = *board;
   for (int i = 0; i < sizeof(board)/sizeof(int); i++) {
       printf("board element %d address: %p, value: %d\n", i, p_b + i, *(p_b+i));
   }
}
