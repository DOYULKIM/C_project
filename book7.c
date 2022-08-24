#include <stdio.h>

void main(){
	int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	int *pr;
	
	printf("%d %d %d\n", sizeof(ar), sizeof(ar[0]), sizeof(int));
	
	for (i = 0; i < sizeof(ar) / sizeof(ar[0]); i++){
		printf("%d ", ar[i]);
	}
	puts("");
	pr = (int *)malloc(sizeof(int) * 20);
	
	for(i = 1; i < 21; ++i){
		pr[i] = i;
		printf("%d", *(pr + i));
	}
}
