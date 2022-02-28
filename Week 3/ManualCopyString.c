#include <stdlib.h>
#include <stdio.h>

int main(){

    int n;
    printf("input length of string ");
    scanf("%d",&n);

    char original[n];
    printf("input the string ");
    scanf("%s",&original);

    char newStr[n];
    for(int i=0;i<n;i++){
        newStr[i] = original[i];
    }

    // printing the copied string
    printf("new string %s",newStr);
    
    return 0;
}