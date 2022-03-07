#include <stdio.h>
#include <stdlib.h>

int main(){

    // auto keyword ->  it initializes the variable automatically
    // int a == auto int a -> they are initilized in the same way
    // local scope

    // default value is garbage value

    auto int i = 10;
    printf("%d\n",i);

    // here the value is initialized
    // if the value had not be initialized it would have a garbage value
    
    auto int a;
    printf("%d \n",a);

    // here the value has not be initlized so it will be reading the garbage value

    auto int j = 1;{
        auto int j = 2;{
            auto int j = 3;
            printf("%d \n",j);
        }
        printf("%d \n",j);
    }printf("%d \n",j);

    // making multiple local blocks and then priniting the values of j

    

    return 0;
}