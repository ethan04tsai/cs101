#include <stdio.h>
int main()
{
    int n = 15,num = 0;
    int a[10];
    for(int i = 0; n > 0; i++){
        a[i] = n%2;
        n = n/2;
        a[i] == 1? num++:num;
    }
    printf("%d",num);
    return 0;
}
