#include <stdio.h>
#include <limits.h>

void maxMin(int nums[], int *max, int *min);

int main()
{
  int i = 0, nums[11], max = INT_MIN, min = INT_MAX;
  do {
    printf("No.%02d: ", i + 1);
    scanf("%d", &nums[i]);
    i++;
  } while(nums[i - 1] >= 0 && i < 10);
  nums[10] = -1;
  
  maxMin(nums, &max, &min);

  printf("Max: %d, Min: %d", max, min);

  return 0;
}

void maxMin(int nums[], int *max, int *min)
{
  int i = 0;
  while (nums[i] >= 0) {
    if (nums[i] > *max) {
      *max = nums[i];
    }
    if (nums[i] < *min) {
      *min = nums[i];
    }
    i++;
  }
}