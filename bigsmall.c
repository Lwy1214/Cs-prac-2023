#include <stdio.h>

int main(void){
  while(1){  
  char ch;
    

    printf("Input character : ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("%c의 소문자는 %c\n", ch, ch+32);
    } else if(ch >= 'a' && ch <= 'z') {
        printf("%c의 대문자는 %c\n", ch, ch-32);
    }else if(ch=='0'){
      break;
    }else {
        printf("%c is not alphabet.\n",ch);
    } 
}
    return 0;
}
           
