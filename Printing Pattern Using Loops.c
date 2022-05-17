#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n, i, j;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
  	int formul = ((2 * n) - 1);
    int l = 0;
    int k = 0;
    int temp = formul;
    int matrix[formul][formul];
    
    
    while(n > 0){
	    for(j = l; j < temp; j++)
	       for(i = l; i < temp; i++)
		        matrix[i][j] = n;
    	l++;	
		temp--;
		n -= 1;
	}
    
    
    for(i = 0; i < formul; i++){
        for(j = 0; j < formul; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
