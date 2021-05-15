#include <stdio.h>
#include "List.h"

int main(){
    /** 리스트 구조체 생성 */
    List list;
    /** 데이터를 읽어와서 저장하기위한 변수 */
    int data;
    /** 리스트 초기화 해주기 */
    ListInit(&list);
    /** 리스트에 데이터 삽입 */
    LInsert(&list, 11);
    LInsert(&list, 11);
    LInsert(&list, 22);
    LInsert(&list, 22);
    LInsert(&list, 33);
    /** 현재 총 데이터 갯수 출력 */
    printf("현재 데이터의 수 : %d\r\n", LCount(&list));
    /** 리스트의 처음 위치로 이동 */
    if(LFirst(&list, &data)){
        /** 리스트 처음의 데이터 출력 */
        printf("%d\t", data);
        /** 데이터가 없을 경우때까지 진행 */
        while(LNext(&list, &data)){
            /** 다음 위치의 데이터 출력 */
            printf("%d\t", data);
        }
    }
    /** 한줄 띄기*/
    printf("\r\n");
    /** 리스트의 처음 위치로 이동 */
    if(LFirst(&list, &data)){
        /** 만약 처음 값이 22이면 데이터 삭젝 */
        if(data == 22){
            /** 데이터 삭제 */
            LRemove(&list);
        }
        /** 리스트의 데이터가 없을 경우까지 */
        while(LNext(&list, &data)){
            /** 데이터가 22이면 */
            if(data == 22){
                /** 데이터 삭제 */
                LRemove(&list);
            }
        }
    }
    /** 한줄 띄기 */
    printf("\r\n");
    /** 현재 총 데이터 갯수를 출력 */
    printf("현재 데이터의 수 : %d \r\n", LCount(&list));
    /** 리스트의 처음 위치로 이동 */
    if(LFirst(&list, &data)){
        /** 리스트의 처음 데이터 출력 */
        printf("%d\t", data);
        /** 데이터가 없을 경우까지 */
        while(LNext(&list, &data)){
            /** 현재 데이터 출력 */
            printf("%d\t", data);
        }
    }
    /** 한줄 띄기 */
    printf("\r\n");

    return 0;
}