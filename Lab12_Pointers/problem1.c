#include<stdio.h>
int secondMAx(int arr[])
{
    int max = *(arr+0);
    int secondMax = *(arr+1) ;
    for(int i = 0; i < 10; i++)     
    {
       if(*(arr+i) > max)
       {
          secondMax = max;
          max = *(arr+i);
        }
    }
    for(int i = 0; i < 10; i++)     
    {
       if(*(arr+i) > secondMax && *(arr+i) != max)
       {
          secondMax = *(arr+i);
        }
    }
  return secondMax;                
}
int main()
{

    printf("Enter the array elements :");
    int arr[10];                      
    for(int i=0;i<10;i++)
    {
        scanf("%d", arr+i);
    }
 
 
       int second_max = secondMAx(arr);
       printf("The second largest element is %d\n",second_max);
    
    return 0;
}
