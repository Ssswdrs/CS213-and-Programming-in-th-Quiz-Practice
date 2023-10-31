#include<stdio.h>
long mem[30],ans[30],a,b,N,K;
      long swap(long a,long b){
      	long i,j;
      	for(i=b;i<N;i++){
      			ans[a]=i+1;

      				if(a==K-1){
      					for(j=0;j<K;j++)printf("%ld " ,ans[j]);
      					printf("\n");
				    }
					if(a<K-1)swap(a+1,i+1);
		  }
	 return 0;
      }

int main(){
	int x;
	scanf("%ld %ld", &N,&K);
	for(x=0;x<N;x++){
		mem[x]=0;
	}
	swap(0,0);
	
	return 0;
}
//https://www.programming.in.th/forum/t580.htm#x
