#include <stdio.h>
#include <string.h>

int main(){
	char a[101], b[101];
	gets(a);
	gets(b);
	int ok = 1;
	for (int i = 0; i < strlen(a); i++){
		if (a[strlen(a) - 1 - i] != b[i]){
			ok = 0;
			break;
		}
	}
	if (ok){
		printf ("YES");
	} else {
		printf ("NO");
	}
	return 0;
}
