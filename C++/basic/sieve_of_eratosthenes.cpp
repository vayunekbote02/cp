#include <bits/stdc++.h>
using namespace std;

// Sieve of erastosthenes
void sieve(int n){
	int a = {0};
	for (int i = 2; i <= n; i++){
		if (a[i] == 0){
			for (int j = i*i; j <= n; j+=i){
				a[j] = 1;
			}
		}
	}
	for (int i = 0; i < n; i++){
		if (a[i] == 0) cout << i << endl; 
	}
}

int main(){
	int n;
	cin >> n;
	
	sieve(n);
}

// Outputs: 11 10