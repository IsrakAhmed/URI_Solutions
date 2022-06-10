#include<stdio.h>

    int main(){

        int i,j=0;
        float a[6],sum=0;

        for(i=0; i<6; i++){
            scanf("%f",&a[i]);
        }

        for(i=0; i<6; i++){
            if(a[i]>0){
                j++;
                sum+=a[i];
            }
        }

        printf("%d valores positivos\n%.1f\n",j,(sum/j));


  return 0;
    }
