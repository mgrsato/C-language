#include <stdio.h>

int main(){
    int i;
    for (i = 1; i <= 100; i++){
        if (i % 2 == 1){
            printf("%d is odd.\n", i);
        }else{
            printf("%d is not odd.\n", i);
        }
    }
    return 0;
}
