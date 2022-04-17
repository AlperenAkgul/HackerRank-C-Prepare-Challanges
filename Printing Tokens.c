#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int i, j;
    int k = 0;
    
    for(i = 0; i < strlen(s); i++){
        if(*(s + i) == ' ' || i == (strlen(s) - 1)){
            for(j = k; j <= i; j++)
                printf("%c", *(s + j));
            k = i + 1;
            printf("\n");
        }
    }
    
    return 0;
}
