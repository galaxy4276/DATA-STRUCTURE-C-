#include <stdio.h>
#include <string.h>
#include <stdlib.h> // malloc, free 가 선언된 헤더 파일


typedef struct Person {
  char name[20];
  int age;
  char address[100];
} Person;


int main(void) {
  Person *p1 = malloc(sizeof(Person));

  printf("p1 size: %d\n", sizeof(p1));
  strcpy(p1->name, "최은기");
  p1->age = 21;
  strcpy(p1->address, "강북구 불주먹 최은기");

  printf("특징: %s\n", p1->address);

  free(p1);

  printf("p1 size: %d", sizeof(p1));
  
  return 0;
}