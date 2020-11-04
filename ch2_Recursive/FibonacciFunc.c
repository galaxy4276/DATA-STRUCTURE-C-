#include<stdio.h>

int Fibo(int n) {
  //printf("recursive %d\n", n);

  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  
  return Fibo(n-1) + Fibo(n-2);
}


int main(void) {
  int i;
  for(i = 1; i < 15; i++)
    printf("%d ,", Fibo(i));
  
  return 0;
}