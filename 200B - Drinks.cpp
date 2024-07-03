#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	int a[n];
	float S = 0;
	for (int i = 0; i < n; i++){
		scanf ("%d", &a[i]);
		S += a[i];
	}
	printf ("%.12f", 1.0 * S / n);
	return 0;
}
