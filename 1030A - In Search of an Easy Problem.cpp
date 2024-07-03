#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	int a[n], ok = 1;
	for (int i = 0; i < n; i++){
		scanf ("%d", &a[i]);
		if (a[i] == 1){
			ok = 0;
		}
	}
	if (ok){
		printf ("EASY");
	} else {
		printf ("HARD");
	}
	return 0;
}
