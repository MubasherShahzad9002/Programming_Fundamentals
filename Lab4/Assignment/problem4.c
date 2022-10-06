#include<stdio.h>
int main(){
    int hrs,mins,sec;
    printf("Enter Time in Seconds = ");
    scanf("%d", &sec);
    hrs = sec/3600;
    mins = (sec - (3600 * hrs))/60;
    sec = (sec - (3600 * hrs)- (60 * mins));
    printf("Time is %d Hours %d Minutes %d Seconds\n", hrs, mins,sec);
    return 0;
}