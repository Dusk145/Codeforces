#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[101];
	gets(a);
	int A = 0, B = 0;
	for (int i = 0; i < strlen(a); i++){
		if (isupper(a[i])){
			A++;
		}
		if (islower(a[i])){
			B++;
		}
	}
	if (A > B){
		for (int i = 0; i < strlen(a); i++){
			a[i] = toupper(a[i]);
		}
	} else {
		for (int i = 0; i < strlen(a); i++){
			a[i] = tolower(a[i]);
		}
	}
	puts(a);
	return 0;
}
