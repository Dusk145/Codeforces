#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf ("%d\n", &n);
	char a[n];
	gets(a);
	int A = 0;
	for (int i = 0; i < strlen(a); i++){
		int ok = 1;
		if (a[i] != a[i + 1]){
			ok = 0;
		}
		if (ok){
			A++;
		}
	}
	printf ("%d", A);
}
