#ifndef __LIST_H__
#define __LIST_H__


/** true false setting true is 1 false is 0 */
#define TRUE            1
#define FALSE           0
/** max list number define */
#define LIST_MAX        100
/** int type alias LData */
typedef int LData;

/** List structure setting */
typedef struct _ListArray{
    /** Insert data */
    LData arr[LIST_MAX];
    /** list data number */
    int numOfData;
    /** current position value */
    int curPosition;
} ArrayList;

/** array list type alias setting */
typedef ArrayList List;

/** List Init */
void ListInit(List *plist);
/** Insert List data */
void LInsert(List *plist, LData pdata);
/** Get List First point data */
int LFirst(List *plist, LData *pdata);
/** moving List index next get data */
int LNext(List *plist, LData *pdata);
/** remove list data */
LData LRemove(List *plist);
/** count list data all */
int LCount(List *plist);

#endif