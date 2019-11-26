#include <stdio.h>
#include <math.h>
int main(){
	long long n,m,a,r,c,t;
	scanf("%lld%lld%lld", &m,&n,&a);
	r=(m/a);
	if(m%a!=0)
		r++;
	c=(n/a);
	if(n%a!=0)
		c++;
	t=r*c;
	printf("%lld",t);
	return 0;
}
