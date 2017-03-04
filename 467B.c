#include<stdio.h>
#include<string.h>

int bi(int m, int k, long long * mm);
int main(){

int n,m,k,l;
long long xi;
long long mm[1002]; // Xi
scanf("%d %d %d",&n,&m,&k);

		for(l=0;l<m+1;l++){
scanf("%lld",&mm[l]);
//test
printf("%lld\n",mm[l]);
//test
					 }

	bi(m,k,mm);			

return 0;
	  }

int bi(int m, int k, long long * mm){
int l,l2,cpr=0,chk=0;
int t;
long long xi;
int b_xi[1050000];
int b_std[1050000];

//transform dec to bi
		for(l2=m;l2>=0;l2--){
xi=mm[l2];
/*
l = -1;
		while(1){
b_xi[++l] = xi%2;
xi = xi/2;

		if(xi == 0){
b_xi[++l] = 3;
break;
			   }	
printf("%d\n",l);

		if(l2 == m){
b_std[l] = b_xi[l];
			   }

			}*/
/*test
		for(t=0;t<l;t++){
printf("%d",b_xi[t]);
				}
printf("\n");
test*/
 
printf(" xi %lld\n",xi);
printf("l2 = %d\n",l2);
				    }
//l2 lop
/*test
		for(t=0;b_std[t] != 3;t++){
printf("%d",b_std[t]);
				          }
printf("\n");
test*/

//transform dec to bi

return 0;
	 }

//compare friends
/*
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
*/
