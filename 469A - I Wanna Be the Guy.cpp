#include <stdio.h>

int main(){
	int n, x, y;
	scanf ("%d%d", &n, &x);
	int a[x];
	for (int i = 0; i < x; i++){
		scanf ("%d", &a[i]);
	}
	scanf ("%d", &y);
	int b[y];
	for (int i = 0; i < y; i++){
		scanf ("%d", &b[i]);
	}
	int A = 0, c[x + y];
	for (int i = 0; i < x + y; i++){
		if (i < x){
			c[i] = a[i];
		} else {
			c[i] = b[A];
			A++;
		}
	}
	for (int i = 0; i < x + y - 1; i++){
		for (int j = i + 1; j < x + y; j++){
			if (c[i] < c[j]){
				int hv = c[i];
				c[i] = c[j];
				c[j] = hv;
			}
		}
	}
	int S = 0;
	for (int i = 0; i < x + y; i++){
		if (c[i] != c[i + 1]){
			S++;
		}
	}
	if (S == n){
		printf ("I become the guy.");
	} else {
		printf ("Oh, my keyboard!");
	}
	return 0;
}
