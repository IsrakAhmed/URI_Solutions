#include <stdio.h>

int main() {

    int N,i,temp,factors,j;

    scanf("%d",&N);

    int num[N];

    for(i=0; i<N; i++){
        scanf("%d",&num[i]);

        factors=0;

        temp=num[i];

        for(j=1; j<=temp; j++){
            if((temp%j)==0){
                factors++;
            }
        }

        if(factors>2){
            printf("%d nao eh primo\n",temp);
        }

        else{
            printf("%d eh primo\n",temp);
        }
    }

    return 0;
}
