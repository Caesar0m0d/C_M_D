#include<stdio.h>
#include<string.h>

//int bi(int m, int k, int * mm);
int main(){

int n,m,k,l;
long long xi;
long long mm[1002];
scanf("%d %d %d",&n,&m,&k);

		for(l=0;l<m+1;l++){
scanf("%lld",&mm[l]);
printf("%lld\n",mm[l]);
					 }

	//bi(m,k,mm);			

return 0;
	  }
/*
int bi(int m, int k, int * mm){
int l=-1,l2,cpr=0,chk=0;
long long xi;
int b_xi[1050000];
int b_std[1050000];

		for(l2=0;l2<m+1;l2++){
scanf("%lld",&xi);
mm[l2] = xi;
				     }

//transform dec to bi
		for(l2=m;l2>=0;l2--){
xi=mm[l2];

		while(1){
b_xi[l++] = xi%2;
xi = xi/2;

		if(xi == 0){
b_xi[++l] = 3;
break;
			   }	
		if(l2 == m){
b_std[l] = b_xi[l];
			   }
			}
//compare friends

		if(l2 != m){
		for(l2=0;l2<1050000;l2++){
if(b_std[l2] != b_xi[l2])chk++;
if(chk > k)break;
if(b_std[l2] == 3 || b_xi[l2] == 3){
cpr++;
break;
		           	   }	
					 }
		     }
//compare friends
				    }
//transform dec to bi

return 0;
	 }
*/
