#include <stdio.h>

/*
  numPtr
  num <- 10
*/


int main(void) {
  int* numPtr;
  int num = 10;
  numPtr = &num;

  printf("������ �ּ�: %p\n", numPtr);
  printf("������ ���� ��: %d\n", *numPtr);

  return 0;
}