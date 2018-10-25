#include <stdio.h>

int main()
{
  int score;

  do {
    printf("Please input score: ");
    scanf("%d", &score);
  } while(score < 0 || score > 100);

  printf("score %d\n", score);

  return 0;
}