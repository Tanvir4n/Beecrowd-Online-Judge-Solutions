#include <stdio.h>

int count;
int fibonacci(int n){
    count++;

    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){

    int n, t;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
            scanf("%d",&t);
            count = 0;
            printf("fib(%d) = %d calls = %d\n",t,count-1,fibonacci(t));
    }
    return 0;
}
