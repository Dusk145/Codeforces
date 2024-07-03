#include <stdio.h>
#include <math.h>

int main(){
	int a[5][5], cot, hang;
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			scanf ("%d", &a[i][j]);
			if (a[i][j] == 1){
				hang = i;
				cot = j;
			}
		}
	}
	printf ("%d", abs(2 - hang) + abs(2 - cot));
	return 0;
}
