#include <stdio.h>
/** 동적 메모리 할당을 위한 header 정의 */
#include <stdlib.h>

/** Linked List 형태의 구조체 생성 */
typedef struct _node{
    /** 저장할 데이터를 담을 변수 */
    int data;
    /** 다음 구조체를 연결 해주기 위한 pointer 변수 */
    struct _node *next;
} Node;

int main(){
    /** 처음 구조체 선언 */
    Node *head = NULL;
    /** 마지막 위치의 구조체 선언 */
    Node *tail = NULL;
    /** 현재 위치를 가르키기 위한 구조체 선언 */
    Node *cur = NULL;
    /** 저장할 구조체 생성을 임시로 저장해주는 구조체 선언 */
    Node *newNode = NULL;
    /** 데이터를 임시 저장하기 위한 변수 선언 */
    int readData;
    /** 데이터 입력을 위한 반복문 */
    while(1){
        /** 입력을 알려주는 출력문 */
        printf("Input natural number : ");
        /** 데이터 입력 받기 */
        scanf("%d", &readData);
        /** 1보다 작은 값을 입력 받으면, 반복문 탈출 */
        if(readData < 1){
            break;
        }
        /** 구조체를 동적으로 메모리 할당 */
        newNode = (Node *)malloc(sizeof(Node));
        /** 입력 받은 데이터를 구조체의 data에 저장 */
        newNode->data = readData;
        /** 다음 구조체를 NULL로 생성 */
        newNode->next = NULL;
        /** 처음이 정해지지 않았을 경우 */
        if(head == NULL){
            /** 처음 위치에 새로 생성한 구조체로 선언 */
            head = newNode;
        /** 처음에 값이 있을 경우 */
        }else{
            /** 마지막의 다음 부분을 새로 생성된 노드로 설정 */
            tail->next = newNode;
        }
        /** 처음 값이 들어오면, head Node와 tail Node를 같은 값으로 설정 */
        /** head 값이 있으면, head의 다음 값을 넣어 주는 것 */
        /** 마지막 노드를 현재 노드로 설정 */
        tail = newNode;

    }
    /** 보기 좋게 하기 위한 한줄 띄기 */
    printf("\r\n");
    /** 입력 받은 데이터를 전체 출력을 알려주는 출력문 */
    printf("input data all print!\r\n");
    /** 처음 값이 없을 경우 */
    if(head == NULL){
        /** 저장된 값이 없다는 것을 알려주는 출력문 */
        printf("not save natural number\r\n");
    }else{
        /** 현재 노드를 처음 위치로 설정 */
        cur = head;
        /** 처음 위치의 값을 출력 */
        printf("%d ", head->data);
        /** 마지막 값이 NULL인 경우 반복문 탈출 */
        while(cur->next != NULL){
            /** 현재 노드를 다음 노드로 이동 */
            cur = cur->next;
            /** 값을 출력 */
            printf("%d ", cur->data);
        }
    }
    /** 한 줄 띄기 */
    printf("\r\n");
    /** 처음 노드의 값이 NULL이면 */
    if(head == NULL){
        /** 프로그램 종료 */
        return 0;
    /** 처음 노드의 값이 NULL이 아니면 */
    }else{
        /** 지울 노드를 처음 노드로 설정 */
        Node *delNode = head;
        /** 지울 노드의 다음 값을 변수에 담기 */
        Node *delNextNode = head->next;
        /** 지울 노드의 데이터 출력 */
        printf("%d delete\r\n", head->data);
        /** 지울 노드 메모리에서 해제 */
        free(delNode);
        /** 지운 노드의 다음 값이 없을 경우까지 반복 */
        while(delNextNode != NULL){
            /** 지울 노드를 지울 다음 노드로 설정 */
            delNode = delNextNode;
            /** 지울 다음 노드를 지울 다음 다음 노드로 설정 */
            delNextNode = delNextNode->next;
            /** 지울 노드의 데이터 출력 */
            printf("%d delete\r\n", delNode->data);
            /** 지울 노드를 메모리 해제 */
            free(delNode);
        }
    }
    /** 한줄 띄기 */
    printf("\r\n");
    return 0;
}