#include <stdio.h>
#include <stdlib.h>

int main(){

    char string[200];
    scanf("%s",&string);

    int length = 0;
    for(int i=0;i<200;i++){
        if(string[i] == '\0'){
            break;
        }
        length++;
    }

    printf("the length of the string is %d\n",length);
    printf("%s\n",string);

    return 0;
}