#include<stdio.h>
#include<string.h>

int bi();
int main(){

int n,m,k,l;

scanf("%d %d %d",&n,&m,&k);

		for(l=0;l<m+1;l++){
bi();
				  }

return 0;
	  }
int bi(){
int l=-1,l2;
long long xi;
int b_xi[1050000];

scanf("%lld",&xi);
//transform dec to bi
		while(1){
b_xi[++l] = xi%2;
xi = xi/2;

		if(xi == 0){
b_xi[++l] = 1;
break;
			   }
			}
//transform dec to bi
//test
		for(l2=0;l2<l;l2++){
printf("%d\n",b_xi[l2]);
				 }
//test
return 0;
	 }

