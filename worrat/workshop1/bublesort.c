#include <stdio.h>

int main()
{
    int arr[10] = {},i,temp,j;
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
        }
    }
    for(i=0;i<10;i++)
    {
        if(i!=9)
        {
            printf("%d ",arr[i]);
        } else
        {
            printf("%d",arr[i]);
        }
    }
    return (0);
}