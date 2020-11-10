#include <stdio.h>

/*
  numPtr
  num <- 10
*/


int main(void) {
  int* numPtr;
  int num = 10;
  numPtr = &num;

  printf("포인터 주소: %p\n", numPtr);
  printf("포인터 변수 값: %d\n", *numPtr);

  return 0;
}