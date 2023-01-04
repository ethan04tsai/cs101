#include <stdio.h>
#include <stdbool.h>

int round_func(float f){
    return (int) (f + 0.5f);
}

int main() {
    float i = 9.2344567789;
    printf("%d", round_func(i));
    return 0;
}
