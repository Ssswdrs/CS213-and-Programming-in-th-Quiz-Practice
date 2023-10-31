#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int checkint[10000];
	char check[10000];
	scanf("%s", check);
	int total=0,ans=0,i,j,k=0;
	total += strlen(check);
	for(j=0;j<total;j++){
		checkint[j]=check[j];
	}
	for(j=0;j<total;j++){
		if(checkint[j]>=65&&checkint[j]<=90)k++;
		else if(checkint[j]>=96&&checkint[j]<=122)k++;
	}
	if(k==total){
	 for(i=0;i<total;i++){
	   if(islower(check[i]))ans++;
	 }
	   if(ans==0)printf("All Capital Letter");
	   if(ans==total)printf("All Small Letter");
	   if(ans!=0&&ans!=total)printf("Mix");
     }
     else printf("Error!");
	return 0;
}
