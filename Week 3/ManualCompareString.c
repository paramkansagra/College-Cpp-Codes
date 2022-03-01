#include <stdio.h>

int main(){

    int m,n;
    printf("input m and n ");
    scanf("%d %d",&m,&n);

    char str1[m],str2[n];

    printf("input string 1 ");
    scanf("%s ",&str1);

    printf("input string 2 ");
    scanf("%s ",&str2);

    int end;

    if(m<n){
        end = m;
    }
    else{
        end = n;
    }

    int done = 0;

    for(int i=0;i<end;i++){
        if(str1[i]>str2[i]){
            printf("str1 is greater \n");
            done = 1;
            break;
        }
        else if(str1[i]<str2[i]){ 
            printf("str2 is greater \n");
            done = 1;
            break;
        }
        else if(str1[i] == str2[i]){
            continue;
        }
    }

    if(done == 0 && n == m){
        printf("both strings are equal \n");
    }
    else if(done == 0 && n>m){
        printf("string 2 is greater \n");
    }
    else if(done == 0 && n<m){
        printf("string 1 is greater \n");
    }

    return 0;
}