#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    int n,m;
    printf("input the string lengths ");
    scanf("%d %d",&n,&m);

    char str1[n],str2[m];
    printf("input string1 ");
    scanf("%s",&str1);
    printf("input string 2 ");
    scanf("%s",&str2);

    // concatenate the string
    char str3[n+m];
    int index = 0;
    for(int i=0;i<n;i++){
        str3[index++] = str1[i];
    }
    for(int j=0;j<m;j++){
        str3[index++] = str2[j];
    }

    printf("the final string is %s",str3);

    return 0;
}