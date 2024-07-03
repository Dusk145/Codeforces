#include <stdio.h>
#include <string.h>

int main(){
	char a[100];
	gets(a);
	int A = 0;
	for (int i = 0; i < strlen(a); i++){
		int ok = 1;
		for (int j = i - 1; j >= 0; j--){
			if (a[i] == a[j]){
				ok = 0;
				break;
			}
		}
		if (ok){
			A++;
		}
	}
	if (A % 2 == 0){
		printf ("CHAT WITH HER!");
	} else {
		printf ("IGNORE HIM!");
	}
	return 0;
}
