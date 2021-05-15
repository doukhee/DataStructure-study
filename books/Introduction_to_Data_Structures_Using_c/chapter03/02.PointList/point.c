#include <stdio.h>
#include "point.h"

/** 값을 설정하기 위한 함수 */
void SetPointPos(Point *ppos, int xpos, int ypos);
/** 값을 보여주기 위한 함수 */
void ShowPointPos(Point *ppos);
/** 값을 비교하기 위한 함수 */
int PointCmp(Point *ppos1, Point *ppos2);

/** 값을 설정하기 위한 함수 */
void SetPointPos(Point *ppos, int xpos, int ypos){
    /** 구조체의 xpos값을 설정 */
    ppos->xpos = xpos;
    /** 구조체의 ypos값을 설정 */
    ppos->ypos = ypos;
}
/** 값을 보여주기 위한 함수 */
void ShowPointPos(Point *ppos){
    /** xpos ypos 값을 출력 */
    printf("[%d %d]", ppos->xpos, ppos->ypos);
}
/** 값을 비교하기 위한 함수 */
int PointCmp(Point *ppos1, Point *ppos2){
    /** xpos 값이 같고, ypos의 값이 같으면 0을 반환 */
    if((ppos1->xpos == ppos2->xpos) && (ppos1->ypos == ppos2->ypos)){
        return 0;
    /** xpos값이 같으면 1 반환 */
    }else if(ppos1->xpos == ppos2->xpos){
        return 1;
    /** ypos값이 같으면 2를 반환 */
    }else if(ppos1->ypos == ppos2->ypos){
        return 2;
    /** xpos값과 ypos값이 같은 것이 없으며 -1 반환 */
    }else{
        return -1;
    }
}