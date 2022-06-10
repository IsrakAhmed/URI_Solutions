#include <stdio.h>

int main() {

    int X,lap=0;
    float avg,sum=0;

    while(1){
        scanf("%d",&X);

        if(X<0){ break; }

        sum+=X;

        lap++;

        avg=sum/lap;
    }

    printf("%.2f\n",avg);

    return 0;
}
