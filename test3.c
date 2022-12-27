#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char * temp = malloc(sizeof(char) * 100);
  strcpy(temp, "안녕하세요.");
  printf("%s", temp);
  free(temp);
  return 0;
}
