#include<stdio.h>
int bi(int m, int k, int * mm);
int main() {

	int n, m, k, l;

	int mm[1002]; // Xi
	scanf("%d %d %d", &n, &m, &k);
	for (l = 0; l<m + 1; l++) {
		scanf("%d", &mm[l]);
	}
	bi(m, k, mm);

	return 0;
}

int bi(int m, int k, int * mm) {
	int i, f, d, c;



	//transform dec to bi

	for (i = 0; i<m; i++)
	{
		f = mm[m] ^ mm[i];
		d = 0;
		while (f != 0)
		{
			d = d + f % 2;
			f = f / 2;
		}
		if (d <= k)
			c++;
	}
	printf("%d", c);




	return 0;
}
