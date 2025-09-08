#include <stdio.h>
int main()
{
    int n = 5,star=40,result;
    for (int i = 1; i <= n; i++)
    {
    
        for (int k = 1; k <= i; k++)
        {

            result=star+k;
            printf(" %d", result);
        }
        printf("\n");
    }



    return 0;
}

