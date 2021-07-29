#include<stdio.h>
int a[4][10] = { {1,2,3,4,5,6,7,8,9,10},{24,25,26,27,28,29,30,31,32,11},{23,40,39,38,37,36,35,34,33,12} ,{22,21,20,19,18,17,16,15,14,13} };
int m = 10;
int n = 4;
const int h = n / 2;
int i = 0;
int j = 0;
int p, q, r, s = 0;
int increment1(int f1, int f2, int f3)
{

	for (f1; f1 < f2; f1++)
	{

		printf("%d\t", a[f3][f1]);
	}
	return f1 - 1;

}

int increment2(int f1, int f2, int f3) {


	for (f1; f1 < f2; f1++)
	{

		printf("%d\t", a[f1][f3]);
	}
	return f1 - 1;
}

int decrement1(int f1, int f2, int f3) {



	for (f1; f1 > 9 - f2; f1--)
	{

		printf("%d\t", a[f3][f1]);
	}
	return f1 + 1;
}
int decrement2(int f1, int f2, int f3) {


	for (f1; f1 > 3 - f2; f1--)
	{

		printf("%d\t", a[f1][f3]);
	}
	return f1 + 1;

}


int main() {
	int u = 0;

	for (u = 0; u < h; u++)
	{

		p = increment1(j, m, i);
		j = p;
		i++;


		q = increment2(i, n, j);
		i = q;
		j--;



		r = decrement1(j, m, i);
		m--;
		n--;
		i--;
		j = r;


		s = decrement2(i, n, j);
		i = s;
		j++;
	}





	return 0;
}


//code not so efficient
