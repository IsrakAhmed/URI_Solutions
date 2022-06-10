#include <stdio.h>
#include <stdlib.h>

int main() {

    int n,i;

    scanf("%d",&n);

    int arr[n];

    arr[0]=0;
    arr[1]=1;

    printf("%d %d ",arr[0],arr[1]);

    for(i=2; i<n; i++){

        arr[i]=arr[i-1]+arr[i-2]; //1
        printf("%d ",arr[i]); //1

        if(i==(n-2)){ //5-2=3
            printf("%d\n",(arr[i]+arr[i-1]));
            exit(0);
        }

    }

    return 0;
}
