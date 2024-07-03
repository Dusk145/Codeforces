#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf ("%d\n", &n);
	char a[n];
	gets(a);
	for (int i = 0; i < n; i++){
		if (a[i] >= 'A' && a[i] <= 'Z'){
			a[i] += 32;
		}
	}
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] > a[j]){
				int hv = a[i];
				a[i] = a[j];
				a[j] = hv;
			}
		}
	}
	int S = 0;
	for (int i = 0; i < n; i++){
		if (a[i] != a[i + 1]){
			S++;
		}
	}
	if (S == 26){
		printf ("YES");
	} else {
		printf ("NO");
	}
	return 0;
}
