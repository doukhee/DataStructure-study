/**
 * 배열이 정렬이 되어 있어야 이진 탐색이 가능하다
 */

#include <stdio.h>

/** 이진 탐색 함수 */
int BSearch(int ar[], int len, int target);


int main(int argc, char **argv){
    /** 배열 선언 */
    int arr[] = {1, 3, 5, 7, 9};
    /** 원하는 값의 위치를 담기 위한 변수 선언 */
    int idx;
    /** 원하는 값을 찾기 */
    idx = BSearch(arr, sizeof(arr)/sizeof(int), 7);
    /** 원하는 값이 배열에 없을 경우 */
    if(idx == -1){
        /** 원하는 값이 없다는 것을 알리기 */
        printf("Search Failed ... \r\n");
    }else{
        /** 원하는 값의 위치와 값을 출력 */
        printf("Search Success Target Index : %d, value : %d \r\n", idx, arr[idx]);
    }
    /** 원하는 값을 찾기 */
    idx = BSearch(arr, sizeof(arr)/sizeof(int), 4);
    /** 원하는 값이 배열에 없을 경우 */
    if(idx == -1){
        /** 원하는 값이 없다는 것을 알리기 */
        printf("Search Failed ... \r\n");
    }else{
        /** 원하는 값의 위치와 값을 출력 */
        printf("Search Success Target Index : %d, value : %d \r\n", idx, arr[idx]);
    }

    return 0;
}

/** 이진 탐색 함수 */
int BSearch(int ar[], int len, int target){
    /** 배열의 첫번째 위치의 값을 초기화 */
    int first = 0;
    /** 배열의 마지막 값을 초기화 */
    int last = len - 1;
    /** 중간 값을 저장하기 위한 변수 선언 */
    int mid;
    /** 처음 위치 값과 마지막 값의 위치랑 같거나 클 경우 종료 */
    while(first <= last){
        /** 중간 값 찾기 */
        mid = (first + last) / 2;
        /** 원하는 값이 중간에 있을 경우 */
        if(target == ar[mid]){
            /** 중간 값 반환 */
            return mid;
        /** 원하는 값이 중간 값에 없을 경우 */
        }else{
            /** 원하는 값이 중간 값보다 작을 경우 */
            if(target < ar[mid]){
                /** 마지막 값을 중간 값 보다 1 작은 설정 */
                /** -1을 해주는 이유는 원하는 값이 없을 경우 무한 루프에 빠지는 것을 방지하기 위해 -1을 해주는 것 */
                last = mid - 1;
            /** 원하는 값이 중간 값보다 클 경우 */
            }else{
                /** 초기 값을 중간 값 하나 위로 설정 */
                /** +1을 해주는 이유는 원하는 값이 없을 경우 무한 루프에 빠지는 것을 방지하기 위해 +1을 해주는 것 */
                first = mid + 1;
            }
        }
    }
    /** 원하는 값이 없을 경우 -1 반환 */
    return -1;
}