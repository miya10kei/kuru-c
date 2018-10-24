#include <stdio.h>

int main()
{
  int price;
  printf("Please input the list price: ");
  scanf("%d", &price);

  printf("10%% off: %dyen\n", (int) (price * 0.9));
  printf("30%% off: %dyen\n", (int) (price * 0.7));
  printf("50%% off: %dyen\n", (int) (price * 0.5));
  printf("80%% off: %dyen\n", (int) (price * 0.2));
  return 0;
}