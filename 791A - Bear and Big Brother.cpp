#include <stdio.h>

int main(){
	int a, b;
	scanf ("%d%d", &a, &b);
	int A = 0;
	while (a <= b){
		a *= 3;
		b *= 2;
		A++;
	}
	printf ("%d", A);
	return 0;
}
