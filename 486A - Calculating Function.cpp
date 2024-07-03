#include <stdio.h>

int main(){
	long long n;
	scanf ("%lld", &n);
	long long S = 0;
	if (n % 2 == 0){
		S = n / 2;
	} else {
		S = ((n + 1) / 2) * (- 1);
	}
	printf ("%lld", S);
	return 0;
}
