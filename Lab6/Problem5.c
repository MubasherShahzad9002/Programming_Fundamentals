// Find the sum of the first 10 numbers that are divisible by 3 and 5.
#include<stdio.h>
#include<math.h>
int main()
{   int sum =0,flag=0,i=1;
    while(flag<10)
{    if (i%5==0 && i%3==0){
      sum=sum+i;
      flag++;

 }
  i++;    

}
printf("%d\n",sum);
    return 0;
}