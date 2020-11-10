#include <stdio.h>

int main(void) {
  int *numPtr;
  int num1 = 10;

  numPtr = &num1; // num1의 주소 값 할당
  printf("%p \n", numPtr); // 포인터 주소 값 출력
  printf("%p \n", &num1); // 위와 동일
  printf("%d \n", *numPtr); // 포인터 참조 메모리의 변수 값을 출력
  printf("%d \n", sizeof(numPtr)); // 64비트 컴파일러라 8바이트가 출력된다.

  return 0;
}