#include <stdio.h>

int main(){
	int n, m;
	scanf ("%d%d", &n, &m);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf ("%d", &a[i]);
	}
	int S = 0;
	for (int i = 0; i < n; i++){
		if (a[i] > m){
			S += 2;
		} else {
			S += 1;
		}
	}
	printf ("%d", S);
	return 0;
}
