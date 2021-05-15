/**
 * @file List.c
 * @author doukhee won (fain9301@yahoo.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
/** include List.h header */
#include "List.h"


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

/** 리스트 초기화 함수 */
void ListInit(List *plist){
    /** 초기 데이터의 갯수를 0으로 초기화 */
    plist->numOfData = 0;
    /** 초기 위치를 -1로 초기화 */
    plist->curPosition = -1;
}

/** 리스트에 데이터 삽입하는 함수 */
void LInsert(List *plist, LData pdata){
    /** 리스트의 갯수가 최대 값보다 크거나 같을 경우 */
    if(plist->numOfData >= LIST_MAX){
        /** 저장이 불가능한 것을 알리고 함수 종료 */
        printf("저장이 불가능합니다.\r\n");
        return ;
    }
    /** 배열의 데이터의 갯수의 위치에 데이터 저장 */
    plist->arr[plist->numOfData] = pdata;
    /** 총 데이터의 갯수를 1 증가 */
    (plist->numOfData)++;
}

/** 리스트의 처음위치의 값을 읽어오는 함수 */
int LFirst(List *plist, LData *pdata){
    /** 총 데이터 갯수가 0일 경우 */
    if(plist->numOfData == 0){
        /** False 반환 */
        return FALSE;
    }
    /** 현재 위치를 맨 처음으로 이동 */
    plist->curPosition = 0;
    /** 처음데이터의 값을 가져와서 pdata의 값을 변경 */
    *pdata = plist->arr[0];
    /** true반환 */
    return TRUE;
}

/** 현재 위치를 다음 위치로 이동하는 함수 */
int LNext(List *plist, LData *pdata){
    /** 현재 위치가 총데이터 수보다 크거나 같을 경우 */
    if(plist->curPosition >= (plist->numOfData) - 1){
        /** false 반환 */
        return FALSE;
    }
    /** 현재 위치를 하나 증가 */
    (plist->curPosition)++;
    /** pdata에 현재위치의 값을 저장하여 반환 */
    *pdata = plist->arr[plist->curPosition];
    /** true 반환 */
    return TRUE;
}

/** 리스트의 값을 제거 */
LData LRemove(List *plist){
    /** 현재 위치를 변경하기 위한 현재 위치 임시 저장 */
    int rpos = plist->curPosition;
    /** 총 갯수를 변경하기 위한 현재 총 데이터 갯수 임시저장 */
    int num = plist->numOfData;
    /** 현재 위치의 데이터의 값 임시 저장 */
    LData rdata = plist->arr[rpos];
    /** 삭제할 데이터의 위치부터 데이터의 위치를 하나 뺀 값으로 변경을 해주기 */
    for(int i = rpos; i < num - 1; i++){
        plist->arr[i] = plist->arr[i+1];
    }
    /** 총 갯수 하나 빼기 */
    (plist->numOfData)--;
    /** 현재 위치 하나 빼주기 */
    (plist->curPosition)--;
    /** 삭제한 데이터 반환 */
    return rdata;
}

/** 리스트의 현재 데이터 수 반환 */
int LCount(List *plist){
    /** 총 데이터 갯수 반환 */
    return plist->numOfData;
}