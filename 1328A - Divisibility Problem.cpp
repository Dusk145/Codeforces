#include <stdio.h>

int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int a, b;
		scanf ("%d%d", &a, &b);
		if (a % b == 0){
			printf ("0\n");
		} else {
			int c = a / b;
			printf ("%d\n", (c + 1) * b - a);
		}
	}
	return 0;
}
