#include<stdio.h>
int main(){
    int target = 300;
    int score, remaining_wickets;
    int remaining_scores;
    printf("Enter Scores: ");
    scanf("%d",&score);
    printf("Enter Remaining Wickets: ");
    scanf("%d",&remaining_wickets);    
    if (score > target)
    {
        printf("Pakistan win the match by %d wickets. \n", remaining_wickets);
    }
    else if (score < target)
    {
        remaining_scores = target - score;
        printf("Pakistan requires %d runs to win with %d wickets. ", remaining_scores, remaining_wickets);
    }
    else{
        printf("Score is %d with %d wickets. So Match is draw. ", target, remaining_wickets);
    }
    return 0;
}
