#include <stdio.h>
#include <string.h>

struct Person {
  char name[20];
  int age;
  char address[100];
};

struct StructValue {
  int val;
} val;

// typedef struct
/*
  ����
  typedef struct ����ü�̸� {
    ...
  } Alias;
*/
typedef struct EungiInfo {
  char name[30];
  int age;
  char address[100];
} Eungi;


int main() {
  struct Person p1;
  Eungi mine;

  val.val = 30;

  strcpy(p1.name, "������");
  p1.age = 30;
  strcpy(p1.address, "���������� ������ �ż���");

  strcpy(mine.name, "������");
  mine.age = 21;
  strcpy(mine.address, "��õ������ ������ �۵���");

  printf("�̸�: %s\n", p1.name);
  printf("����: %d\n", p1.age);
  printf("�ּ�: %s\n", p1.address);

  printf("���� �ּ�: %s\n", mine.address);

  printf("val: %d\n", val.val);

  return 0;
}