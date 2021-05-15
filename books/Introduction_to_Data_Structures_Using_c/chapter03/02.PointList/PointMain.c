#include <stdio.h>
#include <stdlib.h>
#include "List.h"
#include "point.h"


int main(){
    /** 리스트 구조체 선언 */
    List list;
    /** 비교를 위한 point 변수 선언 */
    Point comPos;
    /** 값을 넣기 위한 point변수 선언 */
    /** 리스트의 값이 포인터형 변수이므로 포인터로 선언 */
    Point *ppos;
    /** 리스트 초기화 */
    ListInit(&list);
    /** 넣을 값을 생성하기 위한 동적으로 메모리 할당 */
    ppos = (Point *)malloc(sizeof(Point));
    /** 넣을 값의 위치 설정 */
    SetPointPos(ppos, 2, 1);
    /** 리스트에 데이터 삽입 */
    LInsert(&list, ppos);
    /** 넣을 값 동적 할당 */
    ppos = (Point *)malloc(sizeof(Point));
    /** 넣을 값의 위치 설정 */
    SetPointPos(ppos, 2, 2);
    /** 데이터 삽입 */
    LInsert(&list, ppos);
    /** 넣을 값을 위한 변수 크기 동적 할당 */
    ppos = (Point *)malloc(sizeof(Point));
    /** 넣을 값의 위치 설정 */
    SetPointPos(ppos, 3, 1);
    /** 데이터 삽입 */
    LInsert(&list, ppos);
    /** 넣을 값의 크기를 동적으로 할당 */
    ppos = (Point *)malloc(sizeof(Point));
    /** 넣을 값의 위치 설정 */
    SetPointPos(ppos, 3, 2);
    /** 리스트에 데이터 삽입 */
    LInsert(&list, ppos);
    /** 현재 데이터 수 출력 */
    printf("current data number : %d \r\n", LCount(&list));
    /** 리스트의 처음 위치로 이동 */
    if(LFirst(&list, &ppos)){
        /** 처음 위치에 있는 값 보여주기 */
        ShowPointPos(ppos);
        /** 리스트에 값이 없을 때까지 */
        while(LNext(&list, &ppos)){
            /** 데이터의 값을 출력 */
            ShowPointPos(ppos);
        }
    }
    /** 보기 편하게 하기 위해서 한 줄 띄기 */
    printf("\r\n");
    /** 비교하기 위한 값을 설정*/
    comPos.xpos = 2;
    comPos.ypos = 0;
    /** 리스트의 처음 위치로 이동 */
    if(LFirst(&list, &ppos)){
        /** 처음 위치의 값이 x 값이 같을 경우 */
        if(PointCmp(ppos, &comPos) == 1){
            /** Point 값 제거 */
            ppos = LRemove(&list);
            /** 메모리 해제 */
            free(ppos);
        }
        /** 리스트에 값이 없을 때까지 */
        while(LNext(&list, &ppos)){
            /** 처음 위치의 값이 x 값이 같을 경우 */
            if(PointCmp(ppos, &comPos) == 1){
                /** Point 값 제거 */
            ppos = LRemove(&list);
            /** 메모리 해제 */
            free(ppos);
            }
        }
    }
    /** 한줄 띄기 */
    printf("\r\n");
    /** 현재 총 데이터 수 출력 */
    printf("current data nubmer : %d \r\n", LCount(&list));
    /** 리스트의 처음 위치로 이동 */
    if(LFirst(&list, &ppos)){
        /** 리스트의 처음 값 출력 */
        ShowPointPos(ppos);
        /** 리스트에 데이터가 없을때까지 */
        while(LNext(&list, &ppos)){
            /** 리스트의 값을 출력 */
            ShowPointPos(ppos);
        }
    }
    /** 한줄 띄기 */
    printf("\r\n");
    return 0;
}