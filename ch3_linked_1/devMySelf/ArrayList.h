#ifndef __ARRAY_LIST_H__
#define __ARRAY_List_H__


#define TRUE 1
#define FALSE 0 // ��, ������ ǥ���ϱ� ���� ��ũ�� ����

#define LIST_LEN 100
typedef int LData;


typedef struct __ArrayList {
  LData arr[LIST_LEN];
  int numOfData;
  int curPosition;
} ArrayList; 

typedef ArrayList List;

void ListInit(List* plist); // �ʱ�ȭ
void LInsert(List* plist, Ldata data); // ������ ����

int LFirst(List* plist, Ldata* pdata); // ù ������ ����
int LNext(List* plist, Ldata* pdata); // �� ��° ���� ������ ����

LData LRemove(List* plist); // ������ ������ ���� 
int LCount(List* plist); // ����� ������ �� ��ȯ

#endif