#include <stdio.h>
#include <string.h>

int check(char a[]){
	int A;
	if (strcmp(a, "Tetrahedron") == 0){
		A = 4;
	} else if (strcmp(a, "Cube") == 0){
		A = 6;
	} else if (strcmp(a, "Octahedron") == 0){
		A = 8;
	} else if (strcmp(a, "Dodecahedron") == 0){
		A = 12;
	} else if (strcmp(a, "Icosahedron") == 0){
		A = 20;
	}
	return A;
}

int main(){
	int t;
	scanf ("%d\n", &t);
	int S = 0;
	while (t--){
		char a[20];
		gets(a);
		S += check(a);
	}
	printf ("%d", S);
	return 0;
}
