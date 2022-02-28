#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){

    int n;
    printf("input n ");
    scanf("%d",&n);

    // declaring a string as a character array
    char data[n];

    // taking input as a string from scanf
    scanf("%s",&data);

    // printing the data
    printf("%s \n",data);

    // printing each char
    for(int i=0;i<strlen(data);i++){
        printf("%c ",data[i]);
    }printf("\n");

    // copy the string
    char newStr[n];

    strcpy(data,newStr);

    return 0;
}