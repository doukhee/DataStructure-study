#include <stdio.h>
#include "List.h"


void ListInit(List *plist);
void LInsert(List *plist, LData pdata);

int LFirst(List *plist, LData *pdata);
int LNext(List *plist, LData *pdata);

LData LRemove(List *plist);
int LCount(List *plist);



void ListInit(List *plist){
    plist->numOfData = 0;
    plist->curPosition = -1;
}
void LInsert(List *plist, LData pdata){

    if(plist->numOfData >= LIST_MAX){
        printf("저장이 불가능합니다.\r\n");
        return ;
    }
    
    plist->arr[plist->numOfData] = pdata;
    (plist->numOfData)++;
}

int LFirst(List *plist, LData *pdata){
    if(plist->numOfData == 0){
        return FALSE;
    }
    plist->curPosition = 0;
    *pdata = plist->arr[0];
    return TRUE;
}

int LNext(List *plist, LData *pdata){
    if(plist->curPosition >= (plist->numOfData) - 1){
        return FALSE;
    }
    (plist->curPosition)++;
    *pdata = plist->arr[plist->curPosition];
    return TRUE;
}

LData LRemove(List *plist){
    int rpos = plist->curPosition;
    int num = plist->numOfData;
    LData rdata = plist->arr[rpos];

    for(int i = rpos; i < num - 1; i++){
        plist->arr[i] = plist->arr[i+1];
    }

    (plist->numOfData)--;
    (plist->curPosition)--;
    return rdata;
}

int LCount(List *plist){
    return plist->numOfData;
}