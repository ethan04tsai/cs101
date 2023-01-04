#include <stdio.h>

int add_int(int num){
    int  sum = 0, sign = 1;
    if(num<0){
        num *= -1;
        sign = -1;
    }
    while(num>0){
        if(num > 10)
            sum += num % 10;
        else
            sum += (num % 10)*sign;
        num /= 10;
    }
    return sum;
}

int main() {
    int i = -123;
    printf("%d", add_int(i));
    return 0;
}
