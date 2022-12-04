#include <stdio.h>
#include <conio.h>
int main(){
    int a[3][5];
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            printf("%x",&a[j][i]);
        }
        printf("\n");
    }
    return 0;
}