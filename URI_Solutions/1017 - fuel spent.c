#include<stdio.h>

    int main() {

        int time,speed;
        float fuel,distance;

        scanf("%d %d",&speed,&time);

        distance=speed*time;

        fuel=distance/12;

        printf("%0.3f\n",fuel);

   return 0;
    }//end of main
