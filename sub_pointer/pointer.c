#include <stdio.h>

int main(void) {
  int *numPtr;
  int num1 = 10;

  numPtr = &num1; // num1�� �ּ� �� �Ҵ�
  printf("%p \n", numPtr); // ������ �ּ� �� ���
  printf("%p \n", &num1); // ���� ����
  printf("%d \n", *numPtr); // ������ ���� �޸��� ���� ���� ���
  printf("%d \n", sizeof(numPtr)); // 64��Ʈ �����Ϸ��� 8����Ʈ�� ��µȴ�.

  return 0;
}