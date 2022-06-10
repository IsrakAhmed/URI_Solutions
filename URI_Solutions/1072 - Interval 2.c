#include<stdio.h>

    int main(){

        int N,i,j=0,k=0;

        scanf("%d",&N);

        int X[N];

        for(i=0; i<N; i++){

        scanf("%d",&X[i]);
        }

        for(i=0; i<N; i++){

            if(X[i]>=10){
                if(X[i]<=20){
                    j++;
                }
                else{
                    k++;
                }
            }
            else{
                k++;
            }
        }

        printf("%d in\n%d out\n",j,k);

  return 0;
    }
