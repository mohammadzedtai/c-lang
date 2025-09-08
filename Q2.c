#include <stdio.h>
int main()
{

    int n = 1,start=10;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d",start+n);
            n++;
            
        }
        printf("\n");
    }
    return 0;
}
