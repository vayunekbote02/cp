#include <bits/stdc++.h>
using namespace std;

// Euclidean GCD
int gcd1(int a, int b){
	while (b!=0) {
		int rem = a % b;
		a = b;
		b = rem;
	}
	return a;
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << gcd1(a, b);
}