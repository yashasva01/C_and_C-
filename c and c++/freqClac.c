#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char text[1000];
    char num[10]; 
    scanf("%s",&text);
    int len = strlen(text);
    for(int i = 0; i< 10; i++) num[i] = 0;
    for (int i= 0;i<len;i++){
        int x = text[i] - '0';
        if (x >= 0 && x <= 9) num[x]++;
    }
    for (int i = 0; i< 10; i++) printf("%d ", num[i]);
    return 0;
}