#include <stdio.h>

void body(int rows,int shift){
    int i, space, k = 0;
    
    for (i=1; i<= rows; ++i, k=0) {
        for (int i=2; i<=shift; i++)
            printf("  ");
        for (space = 1; space <= rows - i; ++space)
            printf("  ");
        for(int k=0; k!=2*i-1; k++)
            printf("* ");
        printf("\n");
    }
}
int main() {
    int top = 3;
    int truck = top;
    printf("X'mas tree\n");
    for(int i=top;i>0;i--)
        body(top++, i);
    for(int i=truck;i>0;i--)
        body(1, truck*2-1);
    return 0;
}
