#include <stdio.h>
int main()
{
    int n = 5;

        for (int i = 1; i <= n; i++)
    {
    
    
      
        // numbers
       
   for (int j=1; j <=i; j++)
       {
        printf(" %d",j);
       }

       //spece
         for (int k = i; k <= 4; k++)
        {
            printf("  ");
        }

         //spece
         for (int k = 4; k >= i; k--)
        {
            printf("  ");
        }

          // numbers
         for (int j=i; j >=1; j--)
       {
        printf(" %d",j);
       }

       
        printf("\n");
    }




    return 0;
}
