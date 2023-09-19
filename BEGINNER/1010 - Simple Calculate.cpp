#include<stdio.h>
int main(){

    int a,b;
    double c,res=0,r=0;
    for(int i=0; i<2; i++){
        scanf("%d %d %lf",&a, &b, &c);
        res = b*c;
        r = r + res;
    }
    printf("VALOR A PAGAR: R$ %.2lf\n", r);

    return 0;

}
