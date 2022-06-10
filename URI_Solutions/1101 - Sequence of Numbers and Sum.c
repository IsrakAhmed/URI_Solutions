#include <stdio.h>

int main() {

    int M,N,i=0,sum=0;

    for(i=0; i<100; i++){

        scanf("%d%d",&M,&N);

        if(M<=0 || N<=0){
            break;
        }

        else if(M==N){ printf("%d Sum=%d\n",N,M); }

        else if(M<N){
            for(i=M; i<=N; i++){
                printf("%d ",i);
                sum+=i;
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }

        else if(M>N){
            for(i=N; i<=M; i++){
                printf("%d ",i);
                sum+=i;
            }
            printf("Sum=%d\n",sum);
            sum=0;
        }
    }

    return 0;
}
