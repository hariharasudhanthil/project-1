#include <stdio.h>

int main()
{
    int i, n;
  
    
    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);

    /*
     * Start loop counter from 1, increment it by 1,
     * will iterate till n
     */
    for(i=1; i<=n; i++)
    {
       
        if(i%2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
