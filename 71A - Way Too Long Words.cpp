#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf ("%d\n", &t);
	while (t--){
		char a[100];
		gets(a);
		if (strlen(a) <= 10){
			puts(a);
		} else {
			printf ("%c%d%c\n", a[0], strlen(a) - 2, a[strlen(a) - 1]);
		}
	}
	return 0;
}
