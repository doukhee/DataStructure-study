#include <stdio.h>

int BSearch(int ar[], int len, int target);

int main(int argc, char **argv){
    int arr1[500] = {0,};
    int arr2[5000] = {'\0', };
    int arr3[50000] = {0, };
    int idx;

    idx = BSearch(arr1, sizeof(arr1)/sizeof(int), 1);
    if(idx == -1){
        printf("Search failed ... \r\n");
    }else{
        printf("Search Success Target Idx : %d \r\n", idx);
    }

    idx = BSearch(arr2, sizeof(arr2)/sizeof(int), 2);
    if(idx == -1){
        printf("Search failed ... \r\n");
    }else{
        printf("Search Success Target Idx : %d \r\n", idx);
    }

    idx = BSearch(arr3, sizeof(arr3)/sizeof(int), 3);
    if(idx == -1){
        printf("Search failed ... \r\n");
    }else{
        printf("Search Success Target Idx : %d \r\n", idx);
    }
    return 0;
}

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