#include <bits/stdc++.h>
using namespace std;

void swap1(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int a = 10;
	int b = 11;
	swap1(a, b);
	cout << a << " " << b;
	return 0;
}

// Outputs: 10 11