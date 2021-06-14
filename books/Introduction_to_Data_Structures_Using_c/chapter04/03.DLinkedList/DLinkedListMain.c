#include <stdio.h>
#include "DLinkedList.h"

int main(){
    List list;
    int data;
    ListInit(&list);

    ListInsert(&list, 11);
    ListInsert(&list, 11);
    ListInsert(&list, 22);
    ListInsert(&list, 22);
    ListInsert(&list, 33);

    printf("now data num of data : %d \r\n", ListCount(&list));

    if(ListFirst(&list, &data)){
        printf("%d ", data);

        while(ListNext(&list, &data)){
            printf("%d ", data);
        }
    }
    printf("\r\n");

    if(ListFirst(&list, &data)){
        if(data == 22){
            ListRemove(&list);
        }
        while(ListNext(&list, &data)){
            if(data == 22){
                ListRemove(&list);
            }
        }
    }
    printf("Remove Data after num of data : %d\r\n", ListCount(&list));
    if(ListFirst(&list, &data)){
        printf("%d ", data);
        while(ListNext(&list, &data)){
            printf("%d ", data);
        }
    }
    printf("\r\n");
    return 0;
}