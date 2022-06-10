#include <stdio.h>

int main() {

    int A,N,i,sum=0,j=0;

    scanf("%d",&A);

    while(1){
        scanf("%d",&N);

        if(N>0){ break; }
    }

    for(i=A; j<N; i++){
        sum+=i;
        j++;
    }

    printf("%d\n",sum);

    return 0;
}
