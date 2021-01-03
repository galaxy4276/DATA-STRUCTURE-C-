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

  // ������ ����
  for (int i = 0; i < 5; i++)
    LInsert(&list, (11 * (i + 1)));

  // ������ ���
  printf("���� �������� ��: %d \n", LCount(&list));

  if (LFirst(&list, &data))
  {
    printf("%d, ", data);

    while (LNext(&list, &data))
      printf("%d, ", data);
  }
  printf("\n\n");

  // ���� 22�� ����
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

  // ���� �� �����ִ� ������ ��ü ���
  printf("���� �����ִ� �������� ��: %d\n", LCount(&list));

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