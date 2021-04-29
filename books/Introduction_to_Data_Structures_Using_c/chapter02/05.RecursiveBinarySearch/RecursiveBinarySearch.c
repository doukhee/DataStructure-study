#include <stdio.h>

/** Binary Search using Recursive */
int BsearchRecur(int ar[], int first, int last, int target){
    /** 중간 값 담기 위한 변수 */
    int mid;
    /** 시작 값이 탐색 마지막 값보다 클 경우 */
    if(first > last){
        /** -1 반환 */
        return -1;
    }
    /** 중간 값 구하기 */
    mid = (first + last) / 2;
    /** 배열의 중간 값에 구하는 값이 있을 경우 */
    if(ar[mid] == target){
        /** 중간 값을 반환 */
        return mid;
    /** 구할 값이 중간 값보다 작을 경우 */
    }else if (target < ar[mid]){
        /** 마지막 값을 중간 값에서 1을 뺀 값을 넣어서 다시 함수 호출 (무한 루프를 방지하기 위해서 1을 뺴주는 것) */
        return BsearchRecur(ar, first, mid - 1, target);
    }else{
        /** 처음 값을 중간 값에서 1을 더한 값을 넣어서 다시 함수 호출 (무한 루프를 방지하기 위해서 1을 더해주는 것) */
        return BsearchRecur(ar, mid + 1, last, target);
    }
}

int main(int argc, char **argv){
    /** 함수 선언 함수는 정렬이 되어 있어야한다 */
    int ar[] = {1, 3, 5, 7, 9};
    /** 인덱스 값을 저장하기 위한 변수 */
    int idx;
    /** 배열의 길이는 배열의 크기에서 배열의 형태의 크기로 나누어준다 시작 값이 0부터 시작이므로 1을 빼준다 */
    /** 탐색 실행 */
    idx = BsearchRecur(ar, 0, sizeof(ar)/sizeof(int) - 1, 7);
    /** 탐색 실패 시 */
    if(idx == -1){
        printf("Search Failed ... \r\n");
    /** 탐색 성공 시 */
    }else{
        printf("Target save Index : %d \r\n", idx);
    }

    /** 배열의 길이는 배열의 크기에서 배열의 형태의 크기로 나누어준다 시작 값이 0부터 시작이므로 1을 빼준다 */
    /** 탐색 실행 */
    idx = BsearchRecur(ar, 0, sizeof(ar)/sizeof(int) - 1, 4);
    /** 탐색 실패 시 */
    if(idx == -1){
        printf("Search Failed ... \r\n");
    /** 탐색 성공 시 */
    }else{
        printf("Target save Index : %d \r\n", idx);
    }
    return 0;
}