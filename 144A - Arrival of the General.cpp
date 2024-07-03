#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf ("%d", &a[i]);
	}
	int max = - 1e9, min = 1e9, chiso1, chiso2;
	for (int i = 0; i < n; i++){
		if (a[i] > max){
			max = a[i];
		}
		if (a[i] < min){
			min = a[i];
		}
	}
	for (int i = 0; i < n; i++){
		if (a[i] == max){
			chiso1 = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--){
		if (a[i] == min){
			chiso2 = i;
			break;
		}
	}
	int S = 0;
	if ((chiso1 >= n / 2 && chiso2 <= n / 2) || chiso1 > chiso2){
		S--;
	}
	while (chiso1 != 0){
		S++;
		chiso1--;
	}
	while (chiso2 != n - 1){
		S++;
		chiso2++;
	}
	printf ("%d", S);
	return 0;
}
