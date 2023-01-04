#include <stdio.h>

int main() {
    int n = 7;
    int i, space, k = 0;

    for (i = 1; i<= n; ++i, k=0) {
       for (space = 1; space <= n - i; ++space)
          printf("  ");
       for(int k=0; k!=2*i-1; k++)
          printf("* ");
       printf("\n");
    }
    
    for(int i=0; i<n; i++){
        for(int i=1; i<=n*2-1; i++)
            (i == 1||i==n*2-1)?printf("* "):printf("  ");
        printf("\n");
    }
    
    for(int i = 1; i<=n*2-1; i++)
        printf("* ");
    return 0;
}
