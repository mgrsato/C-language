#include <stdio.h>

int main(){
    int i;
    int j;
    for (i = 1; i < 5; i++){
        for (j = 0; j < i; j++){
            printf("■");
        }
        printf("\n");
    }
    return 0;
}
