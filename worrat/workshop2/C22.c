#include <stdio.h>
int main()
{
    int A;

    scanf("%d", &A);

    if ( (A%4 == 0 && A%100 != 0) || (A%400 == 0) )
    {
        printf("%d", A);
        printf(" is a leap year. February has 29 days.");
    }
    else{
        printf("%d", A);
        printf(" is not a leap year. February has 28 days.");
    }
}