#include <stdio.h>
#include <stdlib.h>

int isAscending(int list[],int start,int end){
    
    for(int i=start;i<end;i++){
        if(list[i]>list[i+1]){
            return 0;
        }
    }
    return 1;
}

int sum(int list[],int x,int y){
    int total = 0;
    for(int i=x;i<=y;i++){
        total += list[i];
    }
    return total;
}

int main(){
    
    int n;
    scanf("%d",&n);
    
    int list[n];
    for(int i=0;i<n;i++){
        scanf("%d",&list[i]);
    }
    
    int max_sum = -1;
    
    for(int start=0;start<n;start++){
        for(int end=start+1;end<n;end++){
            if(isAscending(list,start,end) == 1 && sum(list,start,end)>max_sum){
                max_sum = sum(list,start,end);
            }
        }
    }
    
    printf("%d",max_sum);
    
    return 0;
}