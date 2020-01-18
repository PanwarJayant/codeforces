#include<stdio.h>
int main(){
	int arr[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++)
			scanf("%d", &arr[i][j]);
	}
	int r,c;
	for(int i=0;i<5;i++){
                for(int j=0;j<5;j++)
                        if(arr[i][j]!=0){
				r=i;c=j;
			}
        }
	int mr,mc;
	if(r>2)
		mr=r-2;
	else
		mr=2-r;
	if(c>2)
                mc=c-2;
        else
                mc=2-c;
	int t = mr+mc;
	printf("%d", t);
}

