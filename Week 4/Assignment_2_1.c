#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char arr[1000];
    scanf("%[^\n]%*c",&arr);

    int length = strlen(arr);
    int start = 0;

    for(int i=0;i<length;i++){
        if(arr[i]=='-'){
            start--;
        }
        else{
            start++;
        }
    }

    printf("%d",start);

    return 0;
}