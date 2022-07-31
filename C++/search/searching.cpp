// Types of search (binary search on sorted array only)
#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for (int i = 0; i<n; i++){
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int key){
    int l = 0,  u = n;
    while (l <= u) {
        int mid = (l+u)/2;
        
        if (arr[mid] == key)
            return mid;
            
        else if (arr[mid] > key){
            u = arr[mid] - 1;
        }
        else{
            l = arr[mid] + 1;
        }
    }
    return -1;
}

int main(){
    int n, key;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int a[n];
    cout << "Enter the elements of the array, space seperated: " << endl;
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    cout << "Enter the target element to find: " << endl;
    cin >> key;
    cout << "Element found at index" << " " <<binarySearch(a, n, key);
}