// Link : https://codeforces.com/problemset/problem/158/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, counter = 0;
	cin >> n >> k;
	int arr[n];
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
	    if(arr[i] > 0 && arr[i] >= arr[k-1]){
	        counter++;
	    }
	}
	cout << counter;
}