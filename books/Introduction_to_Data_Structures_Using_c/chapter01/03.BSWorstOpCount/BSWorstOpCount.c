#include <stdio.h>

/**
 *  이진 탐색으로 타겟 값을 찾는 함수
 * @brief search target 
 * 
 * @param ar array
 * @param len array length
 * @param target search value
 * @return int index
 */
int BSearch(int ar[], int len, int target);

int main(int argc, char **argv){
    /** 배열 생성 */
    int arr1[500] = {0,};
    int arr2[5000] = {'\0', };
    int arr3[50000] = {0, };
    /** 원하는 값의 위치를 저장 하기 위한 변수 */
    int idx;
    /** 원하는 값이 배열에 있는지 확인 */
    idx = BSearch(arr1, sizeof(arr1)/sizeof(int), 1);
    /** 원하는 값이 없을 경우 */
    if(idx == -1){
        /** 탐색 실패를 알리는 출력 */
        printf("Search failed ... \r\n");
    }else{
        /** 원하는 값의 배열의 위치를 반환 */
        printf("Search Success Target Idx : %d \r\n", idx);
    }

    /** 원하는 값을 배열에 있는지 확인 */
    idx = BSearch(arr2, sizeof(arr2)/sizeof(int), 2);
    /** 원하는 값이 없을 경우 */
    if(idx == -1){
        /** 탐색 실패를 알리는 출력 */
        printf("Search failed ... \r\n");
    }else{
        /** 원하는 값의 배열의 위치를 반환 */
        printf("Search Success Target Idx : %d \r\n", idx);
    }
    
    /** 원하는 값을 배열에 있는지 확인 */
    idx = BSearch(arr3, sizeof(arr3)/sizeof(int), 3);
    /** 원하는 값이 없을 경우 */
    if(idx == -1){
        /** 탐색 실패를 알리는 출력 */
        printf("Search failed ... \r\n");
    }else{
        /** 원하는 값의 배열의 위치를 반환 */
        printf("Search Success Target Idx : %d \r\n", idx);
    }
    return 0;
}

/**
 *  이진 탐색으로 타겟 값을 찾는 함수
 * @brief search target 
 * 
 * @param ar array
 * @param len array length
 * @param target search value
 * @return int index
 */
int BSearch(int ar[], int len, int target){
    int first = 0;
    int last = len - 1;
    int mid;
    int opCount = 0;

    while(first <= last){
        mid = (first + last) / 2;
        if(target == ar[mid]){
            return mid;
        }else{
            if(target < mid - 1){
                last = mid - 1;
            }else{
                first = mid + 1;
            }
        }
        opCount ++;

    }
    printf("비교연산횟수 : %d \r\n", opCount);
    return -1;
}