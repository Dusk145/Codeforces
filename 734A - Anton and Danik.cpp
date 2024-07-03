#include <stdio.h>
#include <string.h>

int main(){
	char a[100000];
	int n;
	scanf ("%d\n", &n);
	int A = 0, D = 0;
	for (int i = 0; i < n; i++){
		scanf ("%c", &a[i]);
		if (a[i] == 'A'){
			A++;
		}
		if (a[i] == 'D'){
			D++;
		}
	}
	if (D > A){
		printf ("Danik");
	} else if (A > D){
		printf ("Anton");
	} else {
		printf ("Friendship");
	}
	return 0;
}
