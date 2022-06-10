#include <stdio.h>

int main() {

    int N,X,Y,i;

    float div,a,b;

    scanf("%d",&N);

    for(i=0; i<N; i++){

        scanf("%d%d",&X,&Y);

        if(Y==0){
            printf("divisao impossivel\n");
        }

        else{
                a=X;
                b=Y;
                div=a/b;
            printf("%.1f\n",div);
        }
    }

    return 0;
}
