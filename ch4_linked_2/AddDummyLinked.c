#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
  int data;
  struct _node *next;
} Node;

int main(void)
{
  Node *head = NULL; // ����Ʈ�� �Ӹ��� ����Ű�� ������ ����
  Node *tail = NULL; // ����Ʈ�� ������ ����Ű�� ������ ����
  Node *cur = NULL;  /// ����� �������� ��ȸ�� ���Ǵ� ������ ����

  Node *newNode = NULL;
  int readData;

  head = (Node *)malloc(sizeof(Node)); // Dummy
  tail = head;                         // Dummy

  while (1)
  {
    printf("�ڿ��� �Է�: ");
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
  printf("�Է¹��� �������� ��ü���! \n");
  if (head == tail)
  {
    printf("������ �ڿ����� �������� �ʽ��ϴ�. \n");
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
      printf("%d�� �����մϴ�.\n", delNode->data);
      free(delNode);
    }
  }

  return 0;
}