#include <stdio.h>

int main() {

    int pass;

    while(pass!=2002){
        scanf("%d",&pass);

        if(pass==2002){
    printf("Acesso Granted\n");
    }

    else if(pass!=2002){

    printf("Invalid\n");
    }
    }

    return 0;
}
