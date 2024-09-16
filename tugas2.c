#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 101 

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    
    scanf("%s", str1);
    scanf("%s", str2);
    
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2) {
        printf("BERBEDA\n");
    } else {
        int identical = 1;
        for (int i = 0; i < len1; i++) {
            if (str1[i] != str2[i]) {
                identical = 0;
                break;
            }
        }
        
        if (identical) {
            printf("IDENTIK\n");
        } else {
            printf("MIRIP\n");
        }
    }
    
    return 0;
}
