#include <bits/stdc++.h>

using namespace std;

int main(){
	char a[101] = {}, b[101] = {}, c[101] = {};
	gets(a);
	gets(b);
	gets(c);
	if (strlen(a) + strlen(b) != strlen(c)){
		cout << "NO" << endl;
		return 0;
	}
	char d[202] = {};
	for (int i = 0; i < strlen(a); i++){
		d[i] = a[i];
	}
	int A = strlen(a);
	for (int i = 0; i < strlen(b); i++){
		d[A] = b[i];
		A++;
	}
	for (int i = 0; i < strlen(c) - 1; i++){
		for (int j = i; j < strlen(c); j++){
			if (d[i] > d[j]){
				char hv = d[i];
				d[i] = d[j];
				d[j] = hv;
			}
			if (c[i] > c[j]){
				char hv = c[i];
				c[i] = c[j];
				c[j] = hv;
			}
		}
	}
	if (strcmp(c, d) == 0){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
