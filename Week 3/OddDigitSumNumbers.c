#include <stdio.h>
#include <stdlib.h>

int main(){

    int start,end;
    scanf("%d %d",&start,&end);

    int count = 0;
    for(int i=start;i<end;i++){
        int sum = 0;
        int l = i;
        while(l != 0){
            sum += l%10;
            l = l/10;
        }
        if(sum%2 == 1){
            count++;
            printf("%d\n",i);
        }
    }

    if(count == 0){
        printf("NO");
    }


    return 0;
}