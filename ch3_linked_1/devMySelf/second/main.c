#include <stdio.h>
#include "ArrayList.h"
#include "ArrayList.c"


int main(void) {
  // init
  List list;
  int data;
  ListInit(&list);

  // save 5 data
  LInsert(&list, 11); LInsert(&list, 11);
  LInsert(&list, 22); LInsert(&list, 22);
  LInsert(&list, 33);

  // all print
  printf("전체 데이터 출력: %d \n", LCount(&list));

  if (LFirst(&list, &data)); { // read first data
    printf("%d ", data);

    while(LNext(&list, &data)) // second data read
      printf("%d ", data);
  }

  printf("\n\n");

  // delete all int 22
  if (LFirst(&list, &data)) {
    if (data == 22)
      LRemove(&list);
    
    while (LNext(&list, &data)) {
      printf("main Data(35): %d\n", data);
      if (data == 22)
        LRemove(&list);
    }
  }

  // print data remains
  printf("전체 데이터 출력: %d \n", LCount(&list));

  if (LFirst(&list, &data)) {
    printf("%d ", data);

    while (LNext(&list, &data))
      printf("%d ", data);
  }
  printf("\n\n");
  return 0;
}