#include <stdio.h>

int main(){
	int a[4];
	for (int i = 0; i < 4; i++){
		scanf ("%d", &a[i]);
	}
	int S = 0;
	for (int i = 0; i < 4; i++){
		int ok = 1;
		for (int j = i - 1; j >= 0; j--){
			if (a[i] == a[j]){
				ok = 0;
				break;
			}
		}
		if (ok){
			S++;
		}
	}
	printf ("%d", 4 - S);
	return 0;
}
