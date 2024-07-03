#include <stdio.h>
#include <string.h>

void sum(char a[101], char b[101]){
	char c[101];
	for (int i = strlen(a); i >= 0; i--){
		int x = a[i] - '0';
		int y = b[i] - '0';
		if (x == y){
			c[i] = '0';
		} else {
			c[i] = x + y + '0';
		}
	}
	for (int i = 0; i < strlen(a); i++){
		printf ("%c", c[i]);
	}
}

int main(){
	char a[101], b[101];
	gets(a);
	gets(b);
	sum(a, b);
	return 0;
}
