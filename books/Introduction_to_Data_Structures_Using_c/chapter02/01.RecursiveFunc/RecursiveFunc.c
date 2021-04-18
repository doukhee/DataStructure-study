#include <stdio.h>

/** 재귀 함수 */
void RecursiveFunc(int num);

int main(){
    /** 재귀 함수 호출 */
    RecursiveFunc(3);
    return 0;
}
/** 재귀 함수 */
void RecursiveFunc(int num){
    /** 압력 함수가 0과 같거나 작을 경우 */
    if(num <= 0){
        /** 함수 종료 */
        return;
    }
    /** 재귀 함수 호출에 입력된 값을 출력 */
    printf("RecursiveFunc call : %d\r\n", num);
    /** 재귀 함수를 호출 하고, 기존에 입력 num 값에 1을 빼서 호출 */
    RecursiveFunc(num - 1);
}