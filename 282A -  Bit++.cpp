#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf ("%d\n", &t);
	int x = 0;
	while (t--){
		char a[10];
		gets(a);
		if (strcmp(a, "++X") == 0 || strcmp(a, "X++") == 0){
			x++;
		} else if (strcmp(a, "--X") == 0 || strcmp(a, "X--") == 0){
			x--;
		}
	}
	printf ("%d", x);
}
