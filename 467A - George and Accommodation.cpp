#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	int a[n][2];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 2; j++){
			scanf ("%d", &a[i][j]);
		}
	}
	int A = 0;
	for (int i = 0; i < n; i++){
		if (a[i][1] - a[i][0] >= 2){
			A++;
		}
	}
	printf ("%d", A);
	return 0;
}
