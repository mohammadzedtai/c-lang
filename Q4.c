#include <stdio.h>
int main()
{
    int n = 5;

    for (int i = n; i >= 1; i--)
    {
        // spaces
        for (int k = i; k <= n; k++)
        {
            printf("  ");
        }

        // numbers
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 != 0)
            {
                printf(" 1");
            }
            else
            {
                printf(" 0");
            }
        }

            printf("\n");
        }
   

        return 0;
         }

