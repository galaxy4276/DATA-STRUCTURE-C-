#include <stdio.h>
#include <stdlib.h>
#include "DLinkedList.h"

void ListInit(List *plist)
{
  plist->head = (Node *)malloc(sizeof(Node)); // Make Dummy Node
  plist->head->next = NULL;
  plist->comp = NULL;
  plist->numOfData = 0;
}

void FInsert(List *plist, LData data)
{
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;

  newNode->next = plist->head->next;
  plist->head->next = newNode;

  (plist->numOfData)++;
}

void LInsert(List *plist, LData data)
{
  if (plist->comp == NULL)
    FInsert(plist, data);
  // else
  // SInsert(plist, data);
}

// void SInsert(List *plist, LData data)
// {
//   //
// }

int LFirst(List *plist, LData *pdata)
{
  if (plist->head->next == NULL)
    return FALSE;
  plist->before = plist->head;    // pointing Dummy Node
  plist->cur = plist->head->next; // pointing First Node

  *pdata = plist->cur->data;
  return TRUE;
}

int LNext(List *plist, LData *pdata)
{
  if (plist->cur->next == NULL)
    return FALSE;

  plist->before = plist->cur;
  plist->cur = plist->cur->next;

  *pdata = plist->cur->data;
  return TRUE;
}

LData LRemove(List *plist)
{
  Node *rpos = plist->cur;  // adress
  LData rdata = rpos->data; // value

  plist->before->next = plist->cur->next;
  plist->cur = plist->before;

  free(rpos);
  (plist->numOfData)--;
  return rdata;
}

int LCount(List *plist)
{
  return plist->numOfData;
}