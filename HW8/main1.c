#include <stdio.h>
void print_spaces(int r, int rows){
    int j;
    for(j = 1 ; j <= (rows*2) - ((r)*2) ; j++){
        printf(" ");
    }
}

void print_stars(int r, int rows){
    int j;
    for(j = 1 ; j <= (r)*(2)-1 ; j++){
        printf("* ");
    }
    printf("\n");
}

int main() {
    int i;
    int rows = 10;
    for(i = 1 ; i <= rows ; i++){
        print_spaces(i, rows);
        print_stars(i, rows);
    }
    return 0;
}
