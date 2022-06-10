#include <stdio.h>

int main() {

    int N,i,factorial;

    scanf("%d",&N); factorial=N;

    for(i=1; i<N; i++){
        factorial*=(N-i);
    }

    printf("%d\n",factorial);

    return 0;
}
