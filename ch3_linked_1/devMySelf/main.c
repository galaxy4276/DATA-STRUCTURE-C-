#include <stdio.h>
#include "ArrayList.h"
#include "ArrayList.c"


int main(void) {
  List list;
  int data;
  int total = 0;

  ListInit(&list);

  for (int i = 0; i < 9; i++)
    LInsert(&list, i + 1);

  if (LFirst(&list, &data)) {
    while (LNext(&list, &data)) {
      total += data;
    }
  }

  printf("total: %d\n", total);

  return 0;
}