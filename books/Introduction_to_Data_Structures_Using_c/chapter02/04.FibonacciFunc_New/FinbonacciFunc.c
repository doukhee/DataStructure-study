/**
 * Fibonacci function 
 * n = 1 value 0
 * n = 2 value 1
 * fit(n - 1) + fit(n - 2) 
 */

#include <stdio.h>

/** 피보나치 함수 정의 */
int Fibonacci(int n){
    /** 함수를 호출하는 매개변수 출력 */
    printf("fibonacci call param : %d \r\n", n);
    /** 피보나치 수열의 1일 경우 0을 반환 */
    if(n == 1){
        return 0;
    /** 피보나치 수열의 2일 경우 1을 반환 */
    }else if(n == 2){
        return 1;
    /** 피보나치 수열의 다른 값일 경우 fit(n - 1) + fit(n - 2) */
    }else{
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
    }
}

int main(int argc, char **argv){
    /** 피보나치 수열 호출 */
    Fibonacci(7);
    printf("\r\n");
    return 0;
}