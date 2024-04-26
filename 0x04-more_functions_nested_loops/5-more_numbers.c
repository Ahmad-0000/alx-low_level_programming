#include "main.h"

/**
 * more_numbers - is a function to print 10 rows of numbers
 * through 0 to 14
 */

void more_numbers(void)
{
      int i, j;

      for (i = 0; i < 10; i++)
      {
          for (j = 0; j < 15; j++)
          {
              if (j > 9)
              {
                  putchar(j / 10 + '0');
                  putchar(j % 10 + '0');
              }
              else
              {
                  putchar(j + '0');
              }
          }
          putchar('\n');
      }
}
