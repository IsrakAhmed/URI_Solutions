#include <stdio.h>
#include<stdlib.h>

int main() {

    int X,Y,i,j;

    scanf("%d%d",&X,&Y);

    for(i=1; i<=Y; i++){
        for(j=1; j<X; j++){
            printf("%d ",i);
            if(i==Y){
                exit(0);
            }
            i++;
        }
        printf("%d\n",i);
    }

    return 0;
}
