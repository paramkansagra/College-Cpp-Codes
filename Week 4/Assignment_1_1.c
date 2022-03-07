#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char string[1000];
    scanf("%s",&string);

    if(strlen(string)>=3 && strlen(string)<=100){
        bool valid = true;
        for(int i=0;i<strlen(string)-3;i++){
            if(string[i] == string[i+1] && string[i] == string[i+2]){
                valid = false;
            }
        }
        if(valid == false){
            printf("invalid");
        }
        else{
            printf("valid");
        }
    }

    return 0;
}