#include <stdio.h>

/** 팩토리얼 계산 재귀 함수 */
int Factorial(int n){
    /** 입력 값이 0일 경우 */
    if(n == 0){
        /** 1을 반환 */
        return 1;
    /** 입력값이 0이 아닐 경우 */
    }else{
        /** 입력 갑에서 재귀 함수 호출해서 입력값에 1 뺀 값 곱해서 호출 */
        return n * Factorial(n - 1);
    }
}

int main(){
    /** 팩토리얼 1 계산 */
    printf("1! = %d \r\n", Factorial(1));
    /** 팩토리얼 2 계산 */
    printf("2! = %d \r\n", Factorial(2));
    /** 팩토리얼 3 계산 */
    printf("3! = %d \r\n", Factorial(3));
    /** 팩토리얼 4 계산 */
    printf("4! = %d \r\n", Factorial(4));
    /** 팩토리얼 9 계산 */
    printf("9! = %d \r\n", Factorial(9));
    return 0;
}