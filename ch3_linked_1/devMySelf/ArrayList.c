#include <stdio.h>
#include "ArrayList.h"


void ListInit(List* plist) {
  (plist->numOfData) = 0;
  (plist->curPosition) = -1;
}

void LInsert(List* plist, LData data) {
  if (plist->numOfData > LIST_LEN) {
    puts("저장이 불가능합니다.");
    return;
  }

  plist->arr[plist->numOfData] = data;
  (plist->numOfData)++;
}

void LFirst(List* plist, LData* pdata) {
  if (plist->numOfData == 0)
    return FALSE;
}