#include <stdio.h>
/*
  함수 포인터는 함수의 반환값 자료형을 지정해주고 함수 포인터 이름 앞에 *를 붙인뒤
  괄호로 묶어준다.
  다시 괄호를 붙여 함수라는 것을 알린다
  반환값 자료형 (*함수포인터 이름)();
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
  void (*fp)(); // 반환 값과 매개변수가 없는 함수 포인터 fp 선언

  fp = hello;
  fp();

  fp = bonjour;
  fp();

  return 0;
}
