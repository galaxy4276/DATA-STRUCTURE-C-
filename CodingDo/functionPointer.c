#include <stdio.h>
/*
  �Լ� �����ʹ� �Լ��� ��ȯ�� �ڷ����� �������ְ� �Լ� ������ �̸� �տ� *�� ���ε�
  ��ȣ�� �����ش�.
  �ٽ� ��ȣ�� �ٿ� �Լ���� ���� �˸���
  ��ȯ�� �ڷ��� (*�Լ������� �̸�)();
*/

void hello()
{
  printf("Hello, world! \n");
}

void bonjour()
{
  printf("bonjure le monde!\n");
}

int main()
{
  void (*fp)(); // ��ȯ ���� �Ű������� ���� �Լ� ������ fp ����

  fp = hello;
  fp();

  fp = bonjour;
  fp();

  return 0;
}
