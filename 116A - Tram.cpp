#include <stdio.h>

int a[1000][2];

int main(){
	int n;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 2; j++){
			scanf ("%d", &a[i][j]);
		}
	}
	int max = - 1e9, S = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < 2; j++){
			if (j == 0){
				S -= a[i][j];
			} else {
				S += a[i][j];
				if (S > max){
					max = S;
				}
			}
		}
	}
	printf ("%d", max);
	return 0;
}
