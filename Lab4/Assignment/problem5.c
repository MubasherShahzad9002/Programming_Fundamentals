#include<stdio.h>
int main(){
    int hrs,mins,sec,days;
    printf("Enter Time in Seconds = ");
    scanf("%d", &sec);
    days = sec / 86400;
    hrs = (sec - (86400 * days)) / 3600;
    mins = (sec - (86400 * days) - (3600* hrs)) / 60;
    sec = (sec - (86400 * days) - (3600 * hrs) - (60 * mins));
    printf("Time is %d Days %d Hours %d Minutes %d Seconds ", days, hrs, mins,sec);
    return 0;
}