#include<stdio.h>


int LSearch(int ar[], int len, int target) {
  int i;
  for (i = 0; i < len; i++) {
    if (ar[i] == target) {
      return i;
    }
  }
  return -1; // Not Found
}

int main() {
  int arr[] = {3, 5, 2, 4, 9};
  int idx;

  printf("size: %d\n", sizeof(arr)/sizeof(int));
  idx = LSearch(arr, sizeof(arr)/sizeof(int), 4);

  if (idx == -1) {
    printf("??? ????\n");
  } else {
    printf("??? ???? ?��???: %d \n", idx);
  }
  
  idx = LSearch(arr, sizeof(arr)/sizeof(int), 7);

  if (idx == -1) {
    printf("??? ????\n");
  } else {                                                                                                                                                                 
    printf("??? ???? ?��???: %d \n", idx);
  }
} 
