#include <stdio.h>

int main() {

    int N,i,j,lowest=0,place,temp;

    scanf("%d",&N);

    int X[N],origin[N];

    for(i=0; i<N; i++){
        scanf("%d",&X[i]);

        origin[i]=X[i];
    }

    for (i=0; i<N; ++i)
        {

            for (j=i+1; j<N; ++j)
            {

                if (X[i] < X[j])
                {
                    temp=X[i];
                    X[i]=X[j];
                    X[j]=temp;
                }

            }
        }

        for(i=0; i<N; i++){
            if(origin[i]==X[N-1]){
                lowest=origin[i];
                place=i;
            }
        }

        printf("Menor valor: %d\nPosicao: %d\n",lowest,place);

    return 0;
}
