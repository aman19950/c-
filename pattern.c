#include <stdio.h>
int main()
{

    // half Pyramid of *
    /* int i, j, rows;  
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   } */

    // half Pyramid of numbers
    /* int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", j);
      }
      printf("\n");
   }
   
   */
    // half pyramid of alphabets
    /* int i, j;
   char input, alphabet = 'A';
   printf("Enter an uppercase character you want to print in the last row: ");
   scanf("%c", &input);
   for (i = 1; i <= (input - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
    */
    //Inverted half pyramid of *
    /*   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = rows; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   */

    //    int i, space, rows, k = 0;
    //    printf("Enter the number of rows: ");
    //    scanf("%d", &rows);
    //    for (i = 1; i <= rows; ++i, k = 0) {
    //       for (space = 1; space <= rows - i; ++space) {
    //          printf("  ");
    //       }
    //       while (k != 2 * i - 1) {
    //          printf("* ");
    //          ++k;
    //       }
    //       printf("\n");
    //    }

    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {

        for (j = 1; j <= 2*rows - 1; j++)
        {

            if (j >= rows - (i - 1) && j <= rows + (i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}