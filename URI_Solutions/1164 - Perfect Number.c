#include <stdio.h>

int main() {

    int N,i,temp,sum,j;

    scanf("%d",&N);

    int num[N];

    for(i=0; i<N; i++){
        scanf("%d",&num[i]);

        sum=0;

        temp=num[i];

        for(j=1; j<temp; j++){
            if((temp%j)==0){
                sum+=j;
            }
        }

        if(sum==temp){
            printf("%d eh perfeito\n",temp);
        }

        else{
            printf("%d nao eh perfeito\n",temp);
        }
    }

    return 0;
}
