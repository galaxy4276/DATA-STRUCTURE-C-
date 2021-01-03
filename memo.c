#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
  int data;           // 8 Bytes
  struct _node *next; // 8 Bytes
} Node;

int main(void)
{
  Node *head = NULL;
  Node *tail = NULL;
  Node *cur = NULL;

  Node *newNode = NULL;
  int readData;

  while (1)
  {
    printf("�ڿ��� �Է�: ");
    scanf("%d", &readData);
    if (readData < 1)
      break;

    newNode = (Node *)malloc(sizeof(Node));
    newNode->data = readData;
    newNode->next = NULL;

    if (head == NULL)
      head = newNode;
    else
      tail->next = newNode;
    tail = newNode;
  }
  printf("\n");

  printf("�Է� ���� �������� ��ü ���");
  if (head == NULL)
  {
    printf("����� �ڿ����� �������� �ʽ��ϴ�.");
  }
  else
  {
    int curCount = 1;
    cur = head;
    printf("%d ��° ������: %d\n", curCount, cur->data);
    curCount++;
    while (cur->next != NULL)
    {
      cur = cur->next;
      printf("%d ��° ������: %d\n", curCount, cur->data);
      curCount++;
    }
  }

  if (head == NULL)
  {
    return 0;
  }
  else
  {
    cur = head;

    Node *delNode = head;
    Node *delNextNode = head->next;

    printf("%d �� �����մϴ�. \n", delNode->data);
    free(delNode);

    while (delNextNode != NULL)
    {
      delNode = delNextNode;
      delNextNode = delNextNode->next;

      printf("%d �� �����մϴ�. \n", delNode->data);
      free(delNode);
    }
  }
  return 0;
}
