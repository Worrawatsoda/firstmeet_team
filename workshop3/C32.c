#include <stdio.h>
int main()
{
    int A;
    int B;
    int C;
    int D;

    A = 0;
    B = 1;
    C = 0;
    while (C < 5)
    {
        printf("%d %d ", A, B);
        A = A + B;
        D = A + B;
        B = D;
        C++;
    }
}