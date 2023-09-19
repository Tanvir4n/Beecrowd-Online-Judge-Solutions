#include<stdio.h>
int main(){

    int t,k;
    while(scanf("%u %u", &t, &k) != EOF){           // EOF (End Of File) is a symbolic constant in the C programming language that represents the end-of-file marker.
        printf("%u\n", t^k);                        // %u is used to read an unsigned integer from the standard input, an unsigned 32-bit integer can represent values from 0 to 4,294,967,295 (2^32 - 1).
    }

    return 0;

}
