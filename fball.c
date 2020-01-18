#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	scanf("%s", s);
	int l = strlen(s);
	int ctr;
	for(int i=0;i<l;i++){
		ctr=1;
		for(int j=i;j<i+8;j++){
			if(s[j]==s[j+1])
				ctr++;
			else
				break;
		}
		if(ctr>=7)
			break;
	}
	if(ctr<7)
		printf("NO");
	else
		printf("YES");
	return 0;
}
