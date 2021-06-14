#ifndef __DLINKED_LIST_H__
#define __DLINKED_LIST_H__

#define TRUE            1
#define FALSE           0

typedef int LData;

typedef struct _node{
    LData data;
    struct _node *next;
} Node;

typedef struct _linkeList{
    Node *head;
    Node *cur;
    Node *before;
    int numOfData;
    int (* comp)(LData d1, LData d2);
} LinkedList;

typedef LinkedList List;

void ListInit(List *plist);
void ListInsert(List *plist, LData data);

int ListFirst(List *plist, LData *pdata);
int ListNext(List *plist, LData *pdata);

LData ListRemove(List *plist);
int ListCount(List *plist);

void SetSortRule(List *plist, int (* comp)(LData d1, LData d2));

#endif