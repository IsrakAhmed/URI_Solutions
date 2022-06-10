#include <stdio.h>
#include <math.h>

int main() {

    int n;
    double fibonacci;

    scanf("%d",&n);

    fibonacci = (((pow(((1+(2.23606797749979))/2),n))-(pow(((1-(2.23606797749979))/2),n)))/(2.23606797749979));

    printf("%.1lf\n",fibonacci);

    return 0;
}
