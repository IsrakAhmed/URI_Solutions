#include<stdio.h>

    int main(){

        int a[5];
        int i,e=0,o=0,p=0,n=0;

        for(i=0; i<5; i++){

        scanf("%d",&a[i]);

        }

        for(i=0; i<5; i++){

        if(a[i]>0){
                p++;

                if(a[i]%2==0){
                    e++;
                }

                else{
                    o++;
                }
            }

        else if(a[i]==0){ e++; }
        else if(a[i]<0){
                n++;
                if(a[i]%2==0){
                    e++;
                }

                else{
                    o++;
                }

            }

        }

        printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",e,o,p,n);

 return 0;
    }
