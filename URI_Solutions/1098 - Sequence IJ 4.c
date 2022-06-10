#include <stdio.h>

int main() {

    float i,j;
    int x=0,y=0;

    for(i=0.0; i<2.1; i+=0.2){
            for(j=1.0; j<=3.0; j++){
                    if(0<i && i<1 || 1<i && i<2){
                    printf("I=%.1f J=%.1f\n",i,i+j);
                    }
                    else{
                    x=i;
                    y=j+x;
                printf("I=%d J=%d\n",x,y);
                    }
            }

    }

    return 0;
}

