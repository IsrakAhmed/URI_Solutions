#include<stdio.h>
#include<string.h>

int main() {

    char str[100];

    gets(str);

    if(str[0] == 'v'){
        gets(str);
        if(str[0] == 'a'){
            gets(str);
            if(str[0] == 'c'){
                printf("aguia\n");
            }
            else if(str[0] == 'o'){
                printf("pomba\n");
            }
        }
        else if(str[0] == 'm'){
            gets(str);
            if(str[0] == 'o'){
                printf("homem\n");
            }
            else if(str[0] == 'h'){
                printf("vaca\n");
            }
        }
    }

    else if(str[0] == 'i'){
        gets(str);
        if(str[0] == 'i'){
            gets(str);
            if(str[2] == 'm'){
                printf("pulga\n");
            }
            else if(str[0] == 'h'){
                printf("lagarta\n");
            }
        }
        else if(str[0] == 'a'){
            gets(str);
            if(str[0] == 'h'){
                printf("sanguessuga\n");
            }
            else if(str[0] == 'o'){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}

