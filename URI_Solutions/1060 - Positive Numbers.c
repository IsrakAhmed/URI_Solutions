#include<stdio.h>

    int main(){

        float a,b,c,d,e,f;
        int i=0;

        scanf("%f",&a);
        scanf("%f",&b);
        scanf("%f",&c);
        scanf("%f",&d);
        scanf("%f",&e);
        scanf("%f",&f);

        if(a>=0){
            i++;
        }
          if(b>=0){
            i++;
        }
          if(c>=0){
            i++;
        }
          if(d>=0){
            i++;
        }
          if(e>=0){
            i++;
        }
          if(f>=0){
            i++;
        }

        printf("%d valores positivos\n",i);

  return 0;
    }

