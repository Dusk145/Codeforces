#include <stdio.h>

int main(){
	int k, l, m, n, d;
	scanf ("%d%d%d%d%d", &k, &l, &m, &n, &d);
	int A = 0;
	for (int i = 1; i <= d; i++){
		int ok = 1;
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0){
			ok = 0;
		}
		if (ok){
			A++;
		}
	}
	printf ("%d", d - A);
	return 0;
}
