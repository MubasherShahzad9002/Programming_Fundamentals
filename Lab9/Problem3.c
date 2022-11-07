#include<stdio.h>
int find(int a,int arr[]);

int main()
{
    int arr[10]={2, 4, 9, 4, 8, 6, 20, 4, 20, 45};
    int element;

    printf("Enter element to search in array\n[2 4 9 4 8 6 20 4 20 45]:");
    scanf("%d",&element);
    
    int flag=find(element,arr);
    
    if(flag==0)
    printf("Element  not found.%d",element);
    else
    printf("Element %d found %d times.",element,flag);

    return 0;
}

int find(int a,int arr[])
{
    int count=0;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]==a)
        count++;
    }
   return count;
}