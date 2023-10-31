#include<stdio.h>
//Saksorn Sawatdeeraksa
//6409682884
int main(){
	int numcupcake,numpeople,every1get,remain;
	printf("Enter number of cupcakes:");
	scanf("%d",&numcupcake);
	printf("Enter number of people:");
	scanf("%d",&numpeople);
	every1get=numcupcake/numpeople;
	remain=numcupcake%numpeople;
	printf("Everyone will get %d pieces\n",every1get);
	printf("There are %d remaining pieces",remain);
}
