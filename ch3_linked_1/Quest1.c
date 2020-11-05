#include <stdio.h>
#include "ArrayList.h"
#include "ArrayList.c"


int main() {
  List list;
  int total = 0, data;

  ListInit(&list);

  for (int i = 0; i < 9; i++) 
    LInsert(&list, i + 1);
  
  // 정수 모두 총 합 출력
  if (LFirst(&list, &data)) {
    total += data;
    while (LNext(&list, &data)) {
      total += data;
      printf("%d, ", data);
    }
  }

  printf("total: %d\n", total);


  // 2의 배수와 3의 배수 모두 삭제 후 출력
  if (LFirst(&list, &data)) {
    while (LNext(&list, &data)) {
      if ((data % 2 == 0) || (data % 3 == 0)) {
        LRemove(&list);
      }
    }
  }

  printf("\ndelete 2, 3 multiple list: ");
  if (LFirst(&list, &data)) {
    while (LNext(&list, &data)) {
        printf("%d, ", data);
    }
  }
  return 0;
}