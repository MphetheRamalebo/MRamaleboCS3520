#include <stdio.h>
#include <stdlib.h>
//Name: Mphethe Ramalebo M.R.
//Student Number: 202000120
//Function that prints out N prime numbers
int PrimeNumbers()
{
    int num, p=2, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num)
    {
        for(i=2;i<p;i++)
        {
            if(p%i==0)
            break;
        }
        if(i==p)
        {
           printf("%d ",p*p);
           num--;
        }
        p++;
    }

}
//Function that reverses the N prime squares
/*int ReversePrimes()
{
    int num, i, n, rev;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num);
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            break;
        }
        if(i==n)
        {
            int num = 0;
            int rev = 0;
            int rem = 0;


            rem = n % 10;
            rev= rev* 10;
            rev = rev + rem;
            n = n / 10;

            printf("%d ", rev);
            num--;
        }
        rev++;
    }
}*/
int main()
{
    PrimeNumbers();
    //ReversePrimes();
    return 0;
}
