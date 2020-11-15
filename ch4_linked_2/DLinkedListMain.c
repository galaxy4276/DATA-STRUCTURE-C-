#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"
#include "DLinkedList.c"

int main(void)
{
  List list;
  int data;
  ListInit(&list);

  // Save 5 data
  LInsert(&list, 11);
  LInsert(&list, 22);
  LInsert(&list, 33);
  LInsert(&list, 44);
  LInsert(&list, 55);

  printf("Count of Data: %d \n", LCount(&list));

  // Remove
  if (LFirst(&list, &data))
  {
    printf("%d ", data);

    while (LNext(&list, &data))
    {
      if (data == 22)
        LRemove(&list);
    }
  }

  // Print Remains after Remove
  printf("Remains: %d \n", LCount(&list));

  if (LFirst(&list, &data))
  {
    printf("%d ", data);

    while (LNext(&list, &data))
      printf("%d ", data);
  }
  printf("\n\n");
  return 0;
}