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
  형태
  typedef struct 구조체이름 {
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

  strcpy(p1.name, "최은기");
  p1.age = 30;
  strcpy(p1.address, "대전광역시 유성구 신성동");

  strcpy(mine.name, "은기최");
  mine.age = 21;
  strcpy(mine.address, "인천광역시 연수구 송도동");

  printf("이름: %s\n", p1.name);
  printf("나이: %d\n", p1.age);
  printf("주소: %s\n", p1.address);

  printf("은기 주소: %s\n", mine.address);

  printf("val: %d\n", val.val);

  return 0;
}