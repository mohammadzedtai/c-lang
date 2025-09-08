#include <stdio.h>
int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        // spaces
        for (int k = 1; k <= i; k++)
        {
            printf("  ");
        }

        // numbers
        for (int j = i; j <= n; j++)
        {
            printf(" %d", j);
        }

        for (int j = 4; j >= i; j--)
            {
                printf(" %d", j);
            }


        printf("\n");
    }
    

    return 0;
}
