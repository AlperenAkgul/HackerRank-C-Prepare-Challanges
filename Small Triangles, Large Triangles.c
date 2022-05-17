#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    /**
    * Sort an array a of the length n
    */
    int i, j;
    double p;
    double s[n];
    double tempS;
    
    triangle *temp = malloc(sizeof(triangle));
    
    for(i = 0; i < n; i++){
        p = ((tr + i)->a + (tr + i)->b + (tr + i)->c) / 2.0;
        s[i] = pow(p * (p - (tr + i)->a) * (p - (tr + i)->b) * (p - (tr + i)->c), 0.5);
    }
    
    for(j = 0; j < n - 1; j++){
        for(i = 0; i < n - 1 - j; i++){
            if(s[i] > s[i + 1]){
                tempS = s[i + 1];
                s[i + 1] = s[i];
                s[i] = tempS;
                
                temp->a = (tr + i + 1)->a;
                temp->b = (tr + i + 1)->b;
                temp->c = (tr + i + 1)->c;
                
                (tr + i + 1)->a = (tr + i)->a;
                (tr + i + 1)->b = (tr + i)->b;
                (tr + i + 1)->c = (tr + i)->c;
                
                (tr + i)->a = temp->a;
                (tr + i)->b = temp->b;
                (tr + i)->c = temp->c;
            }
        }
    }
    
}

int main()
{
	int n, i;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
