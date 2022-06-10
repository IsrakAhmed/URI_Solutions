#include <stdio.h>

int main() {

    int i,par[5],impar[5],input[15],j,k,l,m;

    j=k=l=m=0;

    for(i=0; i<15; i++){
        scanf("%d",&input[i]);

        if(i<10){
            if(input[i]%2==0){
                par[j]=input[i];
                j++;
                if(j==5){
                    for(l=0; l<5; l++){
                        printf("par[%d] = %d\n",l,par[l]);
                    }
                    j=0;
                }
            }

            else if(input[i]%2!=0){
                impar[k]=input[i];
                k++;
                if(k==5){
                    for(m=0; m<5; m++){
                        printf("impar[%d] = %d\n",m,impar[m]);
                    }
                    k=0;
                }
            }
        }

        else{

                if(input[i]%2==0){
                    par[j]=input[i];
                    j++;

                    if(i==14){
                    for(m=0; m<k; m++){
                            printf("impar[%d] = %d\n",m,impar[m]);
                        }
                    for(l=0; l<j; l++){
                            printf("par[%d] = %d\n",l,par[l]);
                        }
                }
                }


                else if(input[i]%2!=0){
                    impar[k]=input[i];
                    k++;

                    if(i==14){
                    for(m=0; m<k; m++){
                            printf("impar[%d] = %d\n",m,impar[m]);
                        }
                    for(l=0; l<j; l++){
                            printf("par[%d] = %d\n",l,par[l]);
                        }
                }
                }
            }
        }

    return 0;
}
