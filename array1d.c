#include<stdio.h>
int main()
{
    int arr[5];
    int i,j,position,element;
    printf("enter the elements of an array\n");
    for(i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
    printf("%d",arr[i]);
    }
   
    printf("enter the position of an array at which you want to insert an element\n");
    scanf("%d",&position);
   
    printf("enter the element which you want to insert\n");
    scanf("%d",&element);
   
    printf("array after insertion:\n");
       
    for(i=4;i<=position;i--)
    {
    arr[i+1]=arr[i];
    }
    arr[position]=element;
   
    for(i=0;i<6;i++)
    {
    printf("%d",arr[i]);
    }
return 0;
}