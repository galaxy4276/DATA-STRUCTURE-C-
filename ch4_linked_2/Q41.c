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
    {
      head = newNode;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
  }
  printf("\n");

  // �Է¹��� �������� ��� ���� //
  printf("�Է� ���� �������� ��ü ���! \n");
  if (head == NULL)
  {
    printf("����� �ڿ����� �������� �ʽ��ϴ�.");
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

  // �޸��� ���� ���� //
  if (head == NULL)
    return 0;
  else
  {
    Node *delNode = head;
    Node *delNextNode = head->next;

    printf("%d��(��) �����մϴ�. \n", head->data);
    free(delNode); // ù ��� ����

    while (delNextNode != NULL)
    {
      delNode = delNextNode;
      delNextNode = delNextNode->next;

      printf("%d��(��) �����մϴ�. \n", delNode->data);
      free(delNode);
    }
  }

  return 0;
}