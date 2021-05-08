/**
 * @file HanoiTowerSolu.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * 하나의 막대에 싸형 있는 원반을 다른 하나의 원반에 그대로 옮기는 방법
 * 원반은 한번에 하나씩만 옮길 수 있습니다. 그리고 옮기는 과정에서 작은 원반의 위에 큰 원반이 올려져서는 안됩니다.
 * 등비 수열의 공식을 사용하면 쉽게 풀수 있다.
 * 1. 작은 원반 3개를 (맨 아래의 원반을 제외한 나머지 원반을) A에서 B로 이동C - 작은 원반 n - 1개를 A에서 B로 이동
 * 2. 큰원반(맨 아래의 원반) 1개를 A에서 C로 이동 - 큰 원반 1개를 A에서 C로 이동
 * 3. 작은 원반(B로 옮겨진 원반) 3개를 B에서 C로 이동 - 작은 원반 n - 1개를 B에서 C로 이동
 */

#include <stdio.h>

/** 하노이 타워 문제를 풀기 위한 함수 */
void HanoiTowerMove(int num, char from, char by, char to);


int main(){
    /** 원반 3개와 3개의 막대기 3개의 막대기의 이름은 A,B,C로 설정 */
    HanoiTowerMove(3, 'A', 'B', 'C');
    return 0;
}

/** 하노이 타워 문제를 풀기 위한 함수 선언 
 *  num 원반 갯수, from 옮기기 시작할 위치, by 거쳐서 이동할 위치, to 마지막으로 옮겨질 위치
 */
void HanoiTowerMove(int num, char from, char by, char to){
    /** 옮길 원반이 하나가 남았을 경우 */
    if(num == 1){
        /** 원반을 마지막 위치로 이동 시킨다는 출력 */
        printf("원판1을 %c에서 %c 로 이동 \r\n", from, to);
    /** 옮길 원반이 여러개가 남았을 경우 */
    }else{
        /** 원반의 갯수를 하나 감소하여 거쳐갈 위치로 이동 */
        HanoiTowerMove(num - 1, from, to, by);
        /** 원반을 마지막 위치로 이동 */
        printf("원판%d을(를) %c에서 %c로 이동 \r\n", num, from, to);
        /** 원반의 갯수를 하나 감소하여 원반을 원래 위치를 경유 해서 마지막 위치로 이동 */
        HanoiTowerMove(num - 1, by, from, to);
    }
}