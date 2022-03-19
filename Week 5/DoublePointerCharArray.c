#include <stdio.h>
#include <stdlib.h>

int main(){

    char* ptrs = (char*)malloc(sizeof(char)*1000);

    char choice = 'y';
    int i=0;
    
    while(choice == 'y'){
        printf("input the char string ");
        scanf("%s",&ptrs[i++]);
        printf("input the choice ");
        scanf(" %c",&choice);
    }

    for(int x=0;x<i;x++){
        printf("%s\n",ptrs[x]);
    }

    free(ptrs);

    return 0;
}