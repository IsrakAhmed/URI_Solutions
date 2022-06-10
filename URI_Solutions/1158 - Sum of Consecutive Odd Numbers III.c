#include <stdio.h>

int main() {

    int N,X,Y,i,j=0,sum=0;

    scanf("%d",&N);

    for(i=0; i<N; i++){
        scanf("%d%d",&X,&Y);

        while(1){
            if((X%2)!=0){
                sum+=X;
                j++;

                if(j==Y){
                    break;
                }
            }
            X++;
        }
        j=0;

        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
