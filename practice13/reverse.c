#include <stdio.h>

int main()
{
  int n[10];
  for (int i = 0; i < 10; i++) {
    printf("No.%02d: ", i + 1);
    scanf("%d", &n[i]);
  }

  for (int j = 9; j >= 0; j--) {
    printf("%d ", n[j]);
  }
  printf("\n");
  return 0;
}