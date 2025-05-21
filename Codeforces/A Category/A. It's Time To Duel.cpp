#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int flag = 1, zero = 0;
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    for(int i = 0; i < n; i++){
	        if(arr[i] == 0){
	            zero++;
	        }
	    }
	    if(zero == 0){
	        cout << "YES\n";
	        continue;
	    }
	    for(int i = 0; i < n-1; i++){
	        if(arr[i] == 0 && arr[i+1] == 0){
	            flag = 0;
	        }
	    }
	    if(flag == 0 || zero == 0){
	        cout << "YES";
	    }
	    else{
	        cout << "NO";
	    }
	    cout << "\n";
	}
}
