#include <bits/stdc++.h>

using namespace std;

int main() {
	// Your code goes here;
	int n, m, target;
	cin >> n >> m >> target;
	int mat[n][m];
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++) {
			cin >> mat[i][j];
		}
	}
	
	bool found=false;
	int r=0, c=m-1;
	while (r<n and c>=0){
		if (mat[r][c] == target) found = true;
		if (mat[r][c] > target) c--;
		else r++;
	}
	if (found){
		cout << "Element present in matrix.";
	}
	return 0;
}