#include <stdio.h>
int main()
{
    int i;
    int A;
    int B;

    i = 1;
    scanf("%d", &A);

    while (i <= 12 )
    {
        
        B = A*i;    
        printf("%d * %d = %d\n", A, i, B);
        i++;
    }

}