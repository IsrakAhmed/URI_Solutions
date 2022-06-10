#include <stdio.h>

int main() {

    int N,i,x,y,sum=0,j=0,k=0;

    scanf("%d",&N);

    for(i=0; i<N; i++){

        scanf("%d %d",&x,&y);

        if(x<y){
            for(j=x+1; j<y; j+=1){
                if(j%2!=0){
                    sum+=j;
                }
                else{ sum+=0; }
            }
        }

        else if(x>y){
            for(k=y+1; k<x; k+=1){
                if(k%2!=0){
                    sum+=k;
                }
                else{ sum+=0; }
            }
        }

        printf("%d\n",sum);
        sum=0;

    }

    return 0;
}
