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

  while (1)
  {
    printf("자연수 입력: ");
    scanf("%d", &readData);
    if (readData < 1)
      break;

    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = readData;
    newNode->next = NULL;

    if (head == NULL) // 첫번 째 노드라면
      head = newNode;
    else
      tail->next = newNode;
    tail = newNode;
  }
  printf("\n");

  // 입력받은 데이터의 출력 과정 //
  printf("입력 받은 데이터의 전체 출력! \n");
  if (head == NULL)
  {
    printf("저장된 자연수가 존재하지 않습니다.");
  }
  else
  {
    cur = head;
    printf("%d ", cur->data);

    while (cur->next != NULL)
    {
      cur = cur->next;
      printf("%d ", cur->data);
    }
  }
  printf("\n\n");

  // 메모리의 해제 과정 /
  if (head == NULL)
    return 0;
  else
  {
    Node *delNode = head;
    Node *delNextNode = head->next;

    printf("%d을(를) 삭제합니다. \n", head->data);
    free(delNode); // 첫 노드 삭제

    while (delNextNode != NULL)
    {
      delNode = delNextNode;
      delNextNode = delNextNode->next;

      printf("%d을(를) 삭제합니다. \n", delNode->data);
      free(delNode);
    }
  }

  return 0;
}