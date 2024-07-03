#include <stdio.h>

int check(long long n){
	int A = 0;
	while (n){
		if (n % 10 == 4 || n % 10 == 7){
			A++;
		}
		n /= 10;
	}
	if (A == 4 || A == 7){
		return 1;
	} else if (A == 0){
		return 0;
	}
	while (A){
		if (A % 10 != 4 && A % 10 != 7){
			return 0;
		}
		A /= 10;
	}
	return 1;
}

int main(){
	long long n;
	scanf ("%lld", &n);
	if (check(n)){
		printf ("YES");
	} else {
		printf ("NO");
	}
	return 0;
}
