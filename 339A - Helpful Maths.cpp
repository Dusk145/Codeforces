#include <stdio.h>
#include <string.h>

int main(){
	char a[100];
	gets(a);
	for (int i = 0; i < strlen(a) - 1; i++){
		for (int j = i + 1; j < strlen(a); j++){
			if (a[i] != '+' && a[j] != '+' && a[i] > a[j]){
				char hv = a[i];
				a[i] = a[j];
				a[j] = hv;
			}
		}
	}
	puts(a);
	return 0;
}
