#include <stdio.h>

int main(){
    int i;
    int j;
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            if (j == 0){
                printf("□");
            }else{
                printf("■");
            }
        }
        printf("\n");
    }
    return 0;
}
