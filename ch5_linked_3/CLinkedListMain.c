#include <stdio.h>
#include "CLinkedList.h"
#include "CLinkedList.c"

int main(void)
{
  List list;
  int data, i, nodeNum;
  ListInit(&list);

  LInsert(&list, 3);
  LInsert(&list, 4);
  LInsert(&list, 5);
  LInsertFront(&list, 2);
  LInsertFront(&list, 1);

  printf("데이터 연속 3회 출력\n");
  if (LFirst(&list, &data))
  {
    printf("%d ", data);

    for (i = 0; i < LCount(&list) * 3 - 1; i++)
    {
      if (LNext(&list, &data))
      {
        printf("%d ", data);
      }
    }
  }
  printf("\n");

  nodeNum = LCount(&list);

  // 2의 배수 삭제
  printf("2의 배수 삭제\n");
  if (nodeNum != 0)
  {
    LFirst(&list, &data);
    if (data % 2 == 0)
      LRemove(&list);

    for (i = 0; i < nodeNum - 1; i++)
    {
      LNext(&list, &data);
      if (data % 2 == 0)
        LRemove(&list);
    }
  }
  printf("\n");

  // 전체 데이터 1회 출력
  puts("전체 데이터 1회 출력");
  if (LFirst(&list, &data))
  {
    printf("%d ", data);
    for (i = 0; i < LCount(&list) - 1; i++)
    {
      if (LNext(&list, &data))
        printf("%d ", data);
    }
  }

  return 0;
}