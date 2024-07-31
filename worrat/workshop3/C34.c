#include <stdio.h>
int main()
{
    int i;
    int A;
    int B = 0;
    for(i=0;i<10;i++)
       {
        scanf("%d", &A);
        B += A;
        if(A <= 0)
        {
            break;
        }
       }    
    printf("%d", B);
}