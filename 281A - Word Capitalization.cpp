#include <string.h>
#include <stdio.h>

int main(){
	char a[1000];
	gets(a);
	if (a[0] >= 'a' && a[0] <= 'z'){
		a[0] -= 32;
	}
	puts(a);
	return 0;
}
