#include <stdio.h>

int main(){
	int n, k;
	scanf ("%d%d", &n, &k);
	while (k--){
		int a = n % 10;
		if (a != 0){
			n--;
		} else {
			n /= 10;
		}
	}
	printf ("%d", n);
	return 0;
}
