#include<stdio.h>
int main(){

    char name;
    double salary,value;
    double TOTAL;
    scanf("%s %lf %lf",&name, &salary, &value);

    TOTAL = salary+value*.15;                       // 15% = 15/100 = 0.15.
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;

}
