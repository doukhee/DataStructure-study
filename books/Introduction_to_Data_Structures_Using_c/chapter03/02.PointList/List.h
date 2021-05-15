#ifndef __LIST_H__
#define __LIST_H__
/** 좌표 형태의 값을 정의한 header 불러오기 */
#include "point.h"
/** true값 설정 */
#define TRUE            1
/** false값 설정 */
#define FALSE           0
/** 리스트의 최대값 정의 */
#define LIST_MAX        100

/** 리스트의 데이터를 별칭으로 만들어주기 */
typedef Point *LData;
/** 리스트 구조체 선언 */
typedef struct _array{
    /** 배열 선언하기 */
    LData arr[LIST_MAX];
    /** 최대 갯수를 저장하기 위한 변수 */
    int numOfData;
    /** 현재 위치를 저장하기 위한 변순 */
    int curPosition;
} ArrayListTypeDef;
/** 리스트 별칭 선언 */
typedef ArrayListTypeDef List;

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