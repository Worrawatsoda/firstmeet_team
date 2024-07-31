#include <stdio.h>
int main()
{
    int A;

    scanf("%i", &A);
    if (A >= 80)
    {
        printf("Grade :A");
    }
    else if (A >=75) {
        printf("Grade :B+");
    }
    else if (A >= 70){
        printf("Grade :B");
    }
    else if (A >= 65){
        printf("Grade :C+");
    }
    else if (A >= 60){
        printf("Grade :C");
    }
    else if (A >= 55){
        printf("Grade :D+");
    }
    else if (A >= 50){
        printf("Grade :D");
    }
    else {
        printf("Grade :F");
    }

}