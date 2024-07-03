#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	int A = 0;
	while (n != 0){
		while (n >= 100){
			A++;
			n -= 100;
		}
		while (n >= 20){
			A++;
			n -= 20;
		}
		while (n >= 10){
			A++;
			n -= 10;
		}
		while (n >= 5){
			A++;
			n -= 5;
		}
		while (n >= 1){
			A++;
			n -= 1;
		}
	}
	printf ("%d", A);
	return 0;
}
