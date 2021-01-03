#include <stdio.h>
#include "DLinkedList.h"
#include "DLinkedList.c"

int WhoIsPrecede(int d1, int d2)
{
  if (d1 > d2)
    return 1;
  else
    return 0;
}

int main(void)
{
  List list;
  int data;
  ListInit(&list);
  SetSortRule(&list, WhoIsPrecede);

  // 데이터 저장
  for (int i = 0; i < 5; i++)
    LInsert(&list, (11 * (i + 1)));

  // 데이터 출력
  printf("현재 데이터의 수: %d \n", LCount(&list));

  if (LFirst(&list, &data))
  {
    printf("%d, ", data);

    while (LNext(&list, &data))
      printf("%d, ", data);
  }
  printf("\n\n");

  // 숫자 22만 삭제
  if (LFirst(&list, &data))
  {
    if (data == 22)
      LRemove(&list);

    while (LNext(&list, &data))
    {
      if (data == 22)
        LRemove(&list);
    }
  }

  // 삭제 후 남아있는 데이터 전체 출력
  printf("현재 남아있는 데이터의 수: %d\n", LCount(&list));

  if (LFirst(&list, &data))
  {
    printf("%d, ", data);

    while (LNext(&list, &data))
    {
      printf("%d, ", data);
    }
  }
  printf("\n\n");
  return 0;
}