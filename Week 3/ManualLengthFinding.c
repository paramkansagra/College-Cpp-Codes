#include <stdio.h>

int main(){

    char data[40];
    printf("input string ");
    scanf("%s",&data);

    // finding the lenght
    int len = 0;
    for(int i=0;i<40;i++){
        if(data[i] != '\0'){
            len++;
        }
        else{
            break;
        }
    }

    printf("the length is %d",len);

    return 0;
}