/**
 * 순차 탐색을 이용한 원하는 값 위치 찾기
 */
#include <stdio.h>

/** 순차 탐색을 기능을 함수로 선언 */
int Lsearch(int ar[], int len, int target);


int main(int argc, char **argv){
    /** 배열 선언 */
    int arr[] = {3, 5, 2, 4, 9};
    /** 찾은 값의 인덱스 값을 저장할 변수 선언 */
    int idx;
    /** 원하는 값의 위치 찾기 */
    idx = Lsearch(arr, sizeof(arr)/sizeof(int), 4);
    /** 원하는 값이 배열에 없을 경우 */
    if(idx == -1){
        /** 원하는 값이 없다는 것을 알리기 */
        printf("Search failed ...\r\n");
    }else{
        /** 원하는 값의 위치와 값을 출력 */
        printf("Search Success Target Index : %d, value : %d \r\n", idx, arr[idx]);
    }
    /** 원하는 값의 위치 찾기 */
    idx = Lsearch(arr, sizeof(arr)/sizeof(int), 7);
    /** 원하는 값이 배열에 없을 경우 */
    if(idx == -1){
        /** 원하는 값이 없다는 것을 알리기 */
        printf("Search failed ...\r\n");
    }else{
        /** 원하는 값의 위치와 값을 출력 */
        printf("Search Success Target Index : %d, value : %d \r\n", idx, arr[idx]);
    }

    return 0;
}

/** 순차 검색하는 함수 */
/** 배열과 배열의 길이 위치를 알고 싶은 값을 입력 인자로 받는다 */
int Lsearch(int ar[], int len, int target){
    /** 행렬의 길이만큼 반복 */
    for(int i = 0 ; i < len; i++){
        /** 행렬의 요소 값으로 접근 시 원하는 값과 같은 경우 */
        if(ar[i] == target){
            /** 행렬의 위치 값을 반환한다 */
            return i;
        }
    }
    /** 행렬 내에 원하는 값이 없을 경우 -1을 반환 한다 */
    return -1;
}