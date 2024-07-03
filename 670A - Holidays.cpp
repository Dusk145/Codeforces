#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	int a = n % 7, max = (n / 7) * 2, min = (n / 7) * 2;
	if (a <= 2){
		max += a;
	} else if (a == 6){
		min++;
		max += 2;
	} else {
		max += 2;
	}
	printf ("%d %d", min, max);
	return 0;
}
