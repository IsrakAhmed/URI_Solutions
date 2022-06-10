#include<stdio.h>

    int main(){

        int N,hour,minute,second,a;

        scanf("%d",&N);

        hour=N/3600;
        a=N%3600;

        minute=a/60;
        a=a%60;

        second=a;

        printf("%d:%d:%d\n",hour,minute,second);

  return 0;
    }//end of main
