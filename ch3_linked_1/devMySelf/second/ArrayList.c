#include "ArrayList.h"

void ListInit(List *plist) {
  plist->numofData = 0;
  plist->curPosition = -1;
}


int LFirst(List *plist, LData *pdata) {
  if (plist->numofData == 0)
    return FALSE;
  plist->curPosition = 0;
  *pdata = plist->arr[0]; // pdata�� ���� �����ؾ� �ϹǷ�..
  return TRUE;
}


void LInsert(List *plist, LData data) {
  if (plist->numofData > LIST_LEN) {
    puts("������ �Ұ����մϴ�.");
    return;
  }

  plist->arr[plist->numofData] = data;
  (plist->numofData)++;
}


int LNext(List *plist, LData *pdata) {
  if (plist->curPosition >= (plist->numofData) - 1)
    return FALSE;
  (plist->curPosition)++;
  *pdata = plist->arr[plist->curPosition];
  return TRUE;
}


int LRemove(List *plist) {
  int rpos = plist->curPosition;
  int num = plist->numofData;
  int i;
  LData rdata = plist->arr[rpos];
  printf("rdata: %d\n", rdata);
  
  for (i = rpos; i < num - 1; i++) {
    printf("i: %d\n", i);
    plist->arr[i] = plist->arr[i+1];
  }

  (plist->numofData)--;
  (plist->curPosition)--;

  return rdata; // ������ �����͸� ��ȯ
}

int LCount(List* plist) {
  return plist->numofData;
}