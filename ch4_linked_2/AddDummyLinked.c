#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
  int data;
  struct _node *next;
} Node;

int main(void)
{
  Node *head = NULL; // 리스트의 머리를 가리키는 포인터 변수
  Node *tail = NULL; // 리스트의 꼬리를 가리키는 포인터 변수
  Node *cur = NULL;  /// 저장된 데이터의 조회에 사용되는 포인터 변수

  Node *newNode = NULL;
  int readData;

  head = (Node *)malloc(sizeof(Node)); // Dummy
  tail = head;                         // Dummy

  while (1)
  {
    printf("자연수 입력: ");
    scanf("%d", &readData);
    if (readData < 1)
      break;

    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = readData;
    newNode->next = NULL;

    tail->next = newNode;
    tail = newNode;
  }
  printf("\n");

  // print
  printf("입력받은 데이터의 전체출력! \n");
  if (head == tail)
  {
    printf("지정된 자연수가 존재하지 않습니다. \n");
  }
  else
  {
    cur = head;

    while (cur->next != NULL)
    {
      cur = cur->next;
      printf("%d ", cur->data);
    }
  }
  printf("\n\n");

  // remove
  if (head == tail)
    return 0;
  else
  {
    Node *delNode = head;
    Node *delNextNode = head->next;

    while (delNextNode != NULL)
    {
      delNode = delNextNode;
      delNextNode = delNextNode->next;
      printf("%d을 삭제합니다.\n", delNode->data);
      free(delNode);
    }
  }

  return 0;
}