#ifndef __LIST_H__
#define __LIST_H__

#define TRUE            1
#define FALSE           0

#define LIST_MAX        100
typedef int LData;

typedef struct _ListArray{
    LData arr[LIST_MAX];
    int numOfData;
    int curPosition;
} ArrayList;

typedef ArrayList List;


void ListInit(List *plist);
void LInsert(List *plist, LData pdata);

int LFirst(List *plist, LData *pdata);
int LNext(List *plist, LData *pdata);

LData LRemove(List *plist);
int LCount(List *plist);

#endif