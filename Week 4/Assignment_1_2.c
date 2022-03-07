#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char str1[1000],str2[1000];
    scanf("%s %s",&str1,&str2);

    bool anagram = true;

    for(int i=0;i<strlen(str1);i++){
        int count1 = 0;
        int count2 = 0;
        for(int j=0;j<strlen(str1);j++){
            if(str1[i] == str1[j]) count1++;
        }
        for(int j=0;j<strlen(str2);j++){
            if(str1[i] == str2[j]) count2++;
        }

        if(count1 != count2) anagram = false;
    }

    if(anagram == false){
        printf("not anagram \n");
    }
    else{
        printf("anagram \n");
    }

    return 0;
}