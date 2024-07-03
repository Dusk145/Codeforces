#include <stdio.h>

int main(){
	int n, m;
	scanf ("%d", &n);
	int a[n], A = 0;
	for (int i = 0; i < n; i++){
		scanf ("%d", &m);
		a[m - 1] = i + 1;
	}
	for (int i = 0; i < n; i++){
		printf ("%d ", a[i]);
	}
	return 0;
}
