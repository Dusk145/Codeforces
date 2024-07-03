#include <stdio.h>

int a[100000];

int main(){
	int n;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++){
		scanf ("%d", &a[i]);
	}
	int A = 0;
	for (int i = 0; i < n; i++){
		if (a[i] != a[i + 1]){
			A++;
		}
	}
	printf ("%d", A);
	return 0;
}
