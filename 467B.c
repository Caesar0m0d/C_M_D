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

					 }
	bi(m,k,mm);			

return 0;
	  }

int bi(int m, int k, long long * mm){
int l,l2,chk,cpr;
int temp;
long long xi;
int b_xi[100];
int b_std[100];

//transform dec to bi

		for(l2=m;l2>=0;l2--){
xi=mm[l2];
l = -1;
		while(1){

b_xi[++l] = xi%2;
xi = xi/2;

		if(xi == 0){
b_xi[++l] = 3;
break;
			   }	


			}
//compare friends
		  if(l2==m){
		for(temp=0;temp<l+1;temp++){
b_std[temp] = b_xi[temp];
b_xi[temp] = 0;
						}
		
			     }
		else {
		for(temp=0;temp<100;temp++){
if(b_std[temp] != b_xi[temp])chk++;
if(chk > k)break;
if(b_std[temp] == 3 || b_xi[temp] == 3){
cpr++;
break;
b_xi[temp] = 0;
		           	 	      }	
						     }
		      }

//compare friends

				    }

//transform dec to bi
printf("%d",cpr);
return 0;
	 }

//compare friends
/*
		if(l2 != m){
		for(temp=0;temp<1050000;temp++){
if(b_std[temp] != b_xi[temp])chk++;
if(chk > k)break;
if(b_std[temp] == 3 || b_xi[temp] == 3){
cpr++;
break;
		           	   }	
					 }
		     }
//compare friends
*/
