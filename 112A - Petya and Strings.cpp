#include <stdio.h>
#include <string.h>

void inthuong(char a[]){
	for (int i = 0; i < strlen(a); i++){
		if (a[i] >= 'A' && a[i] <= 'Z'){
			a[i] += 32;
		}
	}
}

int main(){
	char a[100], b[100];
	gets(a);
	gets(b);
	inthuong(a);
	inthuong(b);
	int ok = 1;
	for (int i = 0; i < strlen(a); i++){
		if (a[i] > b[i]){
			printf ("1");
			ok = 0;
			break;
		} else if (a[i] < b[i]){
			printf ("-1");
			ok = 0;
			break;
		}
	}
	if (ok){
		printf ("0");
	}
	return 0;
	
}
