#include <stdio.h>

int main() {
  FILE *fp;
  fp = fopen("practice17/test.csv", "w");

  fprintf(fp, "1, 野比のび太, 0\n");
  fprintf(fp, "2, 源静香, 90\n");
  fprintf(fp, "3, 剛田武, 40\n");
  fprintf(fp, "4, 骨川スネ夫, 70\n");

  fclose(fp);

  return 0;
}