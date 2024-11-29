// Link : https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
	int arr[5][5];
	int onei, onej, attempt, center = 2;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                onei = i;
                onej = j;
            }
        }
    }
    attempt = (abs(onei - center) + abs(onej - center));
    cout << attempt;
}