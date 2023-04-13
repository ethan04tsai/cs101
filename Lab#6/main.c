#include <stdio.h>

void print_table(int i, int j)
{
    if (i > 9) {
        return;
    }
    if (j > 9) {
        printf("\n");
        print_table(i+1, 1);
        return;
    }
    printf("%d*%d=%d\t", i, j, i*j);
    print_table(i, j+1);
}

int main()
{
    
    print_table(1, 1);
    return 0;
}
