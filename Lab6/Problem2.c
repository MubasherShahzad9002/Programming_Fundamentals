// Write a program in c that counts the number of digits in an integer.

#include <stdio.h>  
int main()  
{  
   int num ;
   int count = 0;   
   printf("Enter a number: ");  
   scanf("%d",&num);  
   while(num!=0)  
   {  
       num = num/10;  
       count++;  
   }  
     
   printf("\nThe number of digits in an integer is : %d\n",count);  
    return 0;  
} 