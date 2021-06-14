#include <stdio.h>

int main(){
    /** 저장하기 위한 배열 선언 */
    int arr[10];
    /** 값을 읽어오는 숫자를 가져오기 위한 변수 선언 */
    int readCount = 0;
    /** 읽어온 데이터를 저장하기 위한 변수 */
    int readData;
    /** 반복문으로 값을 입력 */
    while(1){
        /** 입력을 알리기 위한 출력문 */
        printf("input integer : ");
        /** 값을 저장 */
        scanf("%d", &readData);
        /** 입력 받은 숫자가 1보다 작을 경우 반복문 탈출 */
        if(readData < 1){
            break;
        }
        /** 배열에 값을 저장 */
        arr[readCount++] = readData;
    }
    /** 저장한 값을 출력하기 위한 반복문 */
    for(int i = 0; i < readCount; i++){
        /** 값을 출력 */
        printf("%d\t", arr[i]);
    }
    /** 한줄 띄기 */
    printf("\r\n");
    return 0;
}