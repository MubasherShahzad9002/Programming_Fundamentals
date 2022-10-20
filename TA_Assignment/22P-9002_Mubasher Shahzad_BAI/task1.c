#include <stdio.h>
#include <math.h>
int main()
{
  //   Variable Declaration for both packeges & Box

  int pack_height, pack_width, pack_length, box_height, box_width, box_length;
  int box_volume, pack_voulme;

  printf("Enter Length of Package = ");
  scanf("%d", &pack_length);
  printf("Enter Width of Package = ");
  scanf("%d", &pack_width);
  printf("Enter height of Package = ");
  scanf("%d", &pack_height);

  pack_voulme = pack_height * pack_length * pack_width;

  printf("\nEnter Length Of Box = ");
  scanf("%d", &box_length);
  printf("Enter Width of Box = ");
  scanf("%d", &box_width);
  printf("Enter height of Box = ");
  scanf("%d", &box_height);

  box_volume = box_length * box_height * box_width;

  // Task #1 Start
  if (box_volume > pack_voulme)
  {
    printf("Y\n");
  }
  else
  {
    printf("N\n");
  }
  // Task #1 End
  return 0;
}