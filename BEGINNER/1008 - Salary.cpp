#include<stdio.h>
int main(){

    int number,hour;
    float SPH,salary;
    scanf("%d %d %f", &number,&hour,&SPH);

    salary = SPH*hour;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;

}
