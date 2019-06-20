#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int minus(int a, int b){
    return a - b;
}

int main(){
    int S = add(7, 3);
    printf("%d\n", S);

    int T = minus(7, 3);
    printf("%d\n", T);

    return 0;
}
