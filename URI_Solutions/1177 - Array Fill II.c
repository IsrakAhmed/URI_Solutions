#include <stdio.h>

int main() {

    int T,N[1000],i,j=0;

    scanf("%d",&T);

    for(i=0; i<1000; i++){

        printf("N[%d] = %d\n",i,j);
        j++;

        if(T==j){
            j=0;
        }
    }

    return 0;
}