#include<stdio.h>

    int main(){

        int arr[3],i,j,temp,k,nd2[3];

        for(i=0; i<3; i++){

            scanf("%d",&arr[i]);
        }

        for(k=0; k<3; k++){

                nd2[k]=arr[k];
            }

        for(i=0; i<3; i++){

            for(j=i+1; j<3; j++){

                if(arr[i]>arr[j]){

                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
            for(i=0; i<3; i++){
                printf("%d\n",arr[i]);
            }

            printf("\n");

            for(i=0; i<3; i++){
                printf("%d\n",nd2[i]);
            }
 return 0;
    }
