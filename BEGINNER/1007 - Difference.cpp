#include<stdio.h>
int main(){

    int A,B,C,D,prodAB,prodCD,diff;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    prodAB = A * B;
    prodCD = C * D;

    diff = prodAB - prodCD;
    printf("DIFERENCA = %d\n", diff);

    return 0;

}
