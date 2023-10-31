#include<stdio.h>

int main(){
	int i,j,ans=0,k,s[3],error=0;
	for(i=0;i<2;i++){
		scanf("%d",&s[i]);
		if(s[i]<=30&&s[i]>=0){
			ans+=s[i];
		}
		else {
			printf("Error!");
			error=1;
			break;
		}
	}
	scanf("%d", &s[2]);
	if(s[2]<=40&&s[2]>=0)ans+=s[2];
		else {
			printf("Error!");
			error=1;
		}
	if(error==0){
	if(ans>=80&&ans<=100)printf("A");
	else if(ans>=75&&ans<=79)printf("B+");
	else if(ans>=70&&ans<=74)printf("B");
	else if(ans>=65&&ans<=69)printf("C+");
	else if(ans>=60&&ans<=64)printf("C");
	else if(ans>=55&&ans<=59)printf("D+");
	else if(ans>=50&&ans<=54)printf("D");
	else if(ans>=0&&ans<=49)printf("F");
	else printf("Error!");
    }
}
