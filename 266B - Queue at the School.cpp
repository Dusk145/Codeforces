#include <stdio.h>

int main(){
	int n, m;
	scanf ("%d%d\n", &n, &m);
	char a[n];
	gets(a);
	while (m--){
		for (int i = 1; i < n; i++){
			if (a[i] == 'G' && a[i - 1] == 'B'){
				a[i] = 'B';
				a[i - 1] = 'G';
				i++;
			}
		}
	}
	puts(a);
	return 0;
}
