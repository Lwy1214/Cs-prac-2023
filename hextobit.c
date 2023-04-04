#include <stdio.h>

int main() {
    int input;
    printf("16진수로 입력해주세요: ");
    scanf("%x", &input);

    int mask = 1 << 15; // 맨 왼쪽 비트부터 출력하기 위한 마스크
    int i;

    // 각 비트를 출력
    for(i=0; i<16; i++) {
        if(i == 4 || i == 7) printf(" : "); // 출력 형식에 따라 출력
        printf("%d", (input & mask) ? 1 : 0); // 비트가 1이면 1, 아니면 0 출력
        mask >>= 1; // 다음 비트를 확인하기 위해 마스크 이동
    }
    
    printf("\n"); // 줄바꿈
    
    return 0;
}
