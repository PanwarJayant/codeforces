#include <stdio.h>

int main() {
	int w;
	scanf("%d", &w);
	if(2<w && w<=100 && w%2==0) 
			printf("YES");	
	else
	printf("NO");

	return 0;
}


