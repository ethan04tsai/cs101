#include <stdio.h>

int main()
{
    int year=2022;
    if (year%4==0){
        if (year%100==0){
            if (year%400==0){
                printf("%d是閏年",year);
            }else{
                printf("%d不是閏年",year);
            }
        }else{
            printf("%d是閏年",year);
        }
    }else{
        printf("%d不是閏年",year);
    }
    
    return 0;
}
