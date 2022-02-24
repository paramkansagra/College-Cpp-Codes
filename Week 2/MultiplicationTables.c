#include <stdio.h>
#include <stdlib.h>

int main(){

    // making multiplication tables like
    // 2*1 = 2
    // 2*2 = 4 ...

    int a,b;
    printf("input number and till which number you want the table ");
    scanf("%d %d",&a,&b);

    // now making the tables
    for(int i=1;i<=b;i++){
        printf("%d*%d = %d \n",a,i,a*i);
    }

    return 0;
}