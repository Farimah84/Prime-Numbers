#include <stdio.h>
#define TRUE 1
#define FALSE 0

int main()
{
   int a;
   printf("Please enter an integer: ");
   scanf("%d", &a);
   printf("\n");

   if  ( IsPrime(a) == TRUE)
   {
       printf("%d is PRIME.\n", a);
   }
   else
   {
       printf("%d is NOT PRIME.\n", a);
   }
   return 0;
} // end of main function

int IsPrime(int a)
{
    int prime = TRUE; //define Flag
    for( int i = 2; i < a; i++)
    {
        if( a % i == 0)
        {
            prime = FALSE;
            break;
        }
    }
    return prime;
}
