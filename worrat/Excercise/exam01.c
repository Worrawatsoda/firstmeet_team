#include <stdio.h>
int main()
{
    int i;
    float C,A,B;

    printf("1. Rectangle\n2. Triangle\n3. Circle\n");
    printf("Enter your choice: ");scanf("%d",&i);
    
    if(i==1)
    {
        printf("Enter the width: ");scanf("%f",&A);
        printf("Enter the height: ");scanf("%f",&B);
        C = A*B;
        if(C<0)
        {
            printf("The area of the triangle is: Error");
        }else{
            printf("The area of the triangle is: %.2f",C);
        }
    }else if(i==2)
    {
        printf("Enter the base: ");scanf("%f",&A);
        printf("Enter the height: ");scanf("%f",&B);
        C = 0.5*A*B;
        if(C<0)
        {
             printf("The area of the triangle is: Error");
        }else{
            printf("The area of the triangle is: %.2f",C);
        }
    }else if(i==3)
    {
        printf("Enter the base: ");scanf("%f",&A);
        C = 3.14*A*A;
        if(C<0)
        {
             printf("The area of the triangle is: Error");
        }else{
            printf("The area of the triangle is: %.2f",C);
        }
    }else
    {
        printf("Enter your choice: %d\n",i);
        printf("Invalid choice");
    }
}
