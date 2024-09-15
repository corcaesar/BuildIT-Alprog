
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Write C code here
    int input;
    int value = 0;
    int flag = 0;

    printf("Masukkan Angka : \n");
    scanf("%d",&input);

    value = input/2;

    if (input == 1){
        printf("BUKAN PRIMA");
    }
    else {
        for ( int i=2 ; i<=value ; i++) {
            if ( input % i == 0 ) {
                printf("BUKAN PRIMA");
                flag=1;
                break;
            }
        }

        if( flag == 0 ) {
            printf("PRIMA");
        }
    }

    return 0;
}