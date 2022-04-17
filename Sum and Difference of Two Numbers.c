#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int sayi1, sayi2;
    float fl1, fl2;
    
    scanf("%d", &sayi1);
    scanf("%d", &sayi2);
    
    scanf("%f", &fl1);
    scanf("%f", &fl2);
    
    printf("%d %d\n", sayi1 + sayi2, sayi1 - sayi2);
    printf("%.1f %.1f", fl1 + fl2, fl1 - fl2);
    
    return 0;
}

