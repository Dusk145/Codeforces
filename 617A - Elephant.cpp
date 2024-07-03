#include <stdio.h>

int main(){
	int x;
	scanf ("%d", &x);
	int A = 0;
	for (int i = 5; i >= 1; i--){
		while (x - i >= 0){
			A++;
			x -= i;
		}
	}
	printf ("%d", A);
	return 0;
}
