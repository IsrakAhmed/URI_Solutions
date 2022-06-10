#include <stdio.h>

int main() {

    int N,i;

    scanf("%d",&N);

    for(i=2; i<=N; i++){
        printf("Ho ");

        if(i==N){
            printf("Ho!\n");
        }
    }

    return 0;
}
