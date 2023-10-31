#include<stdio.h>
#include<math.h>
int main(){
	double x,y,z,ans;
	scanf("%lf %lf",&x,&y);
	z = (x*x)+(y*y);
	ans = sqrt(z);
	printf("%.6lf",ans);
	
	return 0;
}
