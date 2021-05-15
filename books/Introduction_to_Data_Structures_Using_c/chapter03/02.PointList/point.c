#include <stdio.h>
#include "point.h"


void SetPointPos(Point *ppos, int xpos, int ypos);
void ShowPointPos(Point *ppos);
int PointCmp(Point *ppos1, Point *ppos2);


void SetPointPos(Point *ppos, int xpos, int ypos){
    ppos->xpos = xpos;
    ppos->ypos = ypos;
}

void ShowPointPos(Point *ppos){
    printf("[%d %d]", ppos->xpos, ppos->ypos);
}

int PointCmp(Point *ppos1, Point *ppos2){
    if((ppos1->xpos == ppos2->xpos) && (ppos1->ypos == ppos2->ypos)){
        return 0;
    }else if(ppos1->xpos == ppos2->xpos){
        return 1;
    }else if(ppos1->ypos == ppos2->ypos){
        return 2;
    }else{
        return -1;
    }
}