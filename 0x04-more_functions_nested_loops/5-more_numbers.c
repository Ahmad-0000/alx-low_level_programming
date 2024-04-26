#include "main.h"

/**
 * more_numbers - is a function to print 10 rows of numbers
 * through 0 to 14
 */

void more_numbers(void)
{
      int i, j;
      int k, l;


      for (i = 0; i < 10; i++)
      {
          for (j = 0; j < 15; j++)
          {
              if (j > 9)
              {
                  for (l = 0; l < 2; l++)
                  {
                      if (l == 0)
                          k = j / 10;
                      else
                          k = j % 10;
                      _putchar(k + '0');
                  }
              }
              else
              {
                  _putchar(j + '0');
              }
          }
          _putchar('\n');
      }
}
