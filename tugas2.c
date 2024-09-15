#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char input1[100];
    char input2[100];
    int input1Length;
    int input2Length;
    int value;

    printf("MASUKKAN INPUT 1 : \n");
    scanf("%s", input1);
    printf("MASUKKAN INPUT 2 : \n");
    scanf("%s", input2);

    input1Length = strlen(input1);
    input2Length = strlen(input2);

    value=strcmp(input1,input2);

    if (value==0) {
        printf("IDENTIK");
    }
    else if(value!=0 && input1Length==input2Length){
        printf("MIRIP");
    }
    else {
          printf("BERBEDA");
    }

    return 0;
}