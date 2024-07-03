#include <stdio.h>
#include <string.h>

int check(int n){
	int A = 0;
	char a[10];
	while (n){
		a[A] = n % 10;
		n /= 10;
		A++;
	}
	for (int i = 0; i < A - 1; i++){
		for (int j = i + 1; j < A; j++){
			if (a[i] == a[j]){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	int n;
	scanf ("%d", &n);
	int ok = 1;
	while (ok){
		n++;
		if (check(n)){
			break;
		}
	}
	printf ("%d", n);
	return 0;
}
