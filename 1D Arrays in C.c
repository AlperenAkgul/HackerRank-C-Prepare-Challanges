#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int *ptr, n;
    int i = 1;
    int toplam = 0;
    
    scanf("%d", &n);
    ptr = (int*)malloc(sizeof(int) * n); 
    
    for(i = 0; i < n; i++){
        scanf("%d", (ptr + i));
        toplam += *(ptr + i);
    } 
    
    printf("%d", toplam);
    
    return 0;
}

