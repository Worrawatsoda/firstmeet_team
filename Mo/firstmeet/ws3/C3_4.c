#include <stdio.h>
int main() {
    int num;
    int sum =0 ;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num);
        sum += num;
        if (num<= 0)
        {
            break;
        }
        
    }
    printf("%d",sum);
}