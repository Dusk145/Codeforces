#include <stdio.h>

int main(){
	int k, n, w;
	scanf ("%d%d%d", &k, &n, &w);
	int S = 0;
	for (int i = 1; i <= w; i++){
		S += i * k;
	}
	if (S - n >= 0){
		printf ("%d", S - n);
	} else {
		printf ("0");
	}
	return 0;
}
