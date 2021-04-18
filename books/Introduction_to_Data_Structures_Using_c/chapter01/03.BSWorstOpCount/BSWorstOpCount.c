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
    /** 첫번째 위치 초기화 설정 */
    int first = 0;
    /** 마지막 위치 설정 */
    int last = len - 1;
    /** 중간 값을 저장하기 위한 변수 선언 */
    int mid;
    /** 연산 횟수를 저장하기 위한 변수 */
    int opCount = 0;
    /** 처음 위치가 마지막 위취보다 커질 경우 종료하는 반복문 */
    while(first <= last){
        /** 중간 값 위치 구해서 저장 */
        mid = (first + last) / 2;
        /** 원하는 값이 배열에 중간 값에 위치할 경우 */
        if(target == ar[mid]){
            /** 현재 인덱스 값 반환 */
            return mid;
        /** 원하는 값이 중간 값에 위치 하지 않을 경우 */
        }else{
            /** 원하는 값이 중간 값보다 밑에 있을 경우 */
            if(target < mid - 1){
                /** 마지막 값을 중간 값보다 1 작게 설정 */
                last = mid - 1;
            /** 첫번째 값을 중간 값보다 1 크게 설정 */
            }else{
                first = mid + 1;
            }
        }
        /** 연산 횟수 1 증가 */
        opCount ++;
    }
    /** 총 진행한 회수를 출력 */
    printf("비교연산횟수 : %d \r\n", opCount);
    /** 없을 시 -1 반환 */
    return -1;
}