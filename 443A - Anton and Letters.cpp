#include <stdio.h>
#include <string.h>

int main(){
	char a[1001];
	gets(a);
	a[0] = ' ';
	a[strlen(a) - 1] = ',';
	char *day = strtok(a, ",");
	int A = 0;
	char b[100][100];
	while (day != NULL && strcmp(day, " ") != 0){
		int ok = 1;
		for (int i = 0; i < A; i++){
			if (strcmp(b[i], day) == 0){
				ok = 0;
				break;
			}
		}
		if (ok){
			strcpy(b[A], day);
			A++;
		}
		day = strtok(NULL, ",");
	}
	printf ("%d", A);
	return 0;
}
