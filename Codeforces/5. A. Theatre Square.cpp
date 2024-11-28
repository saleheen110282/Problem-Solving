#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, m, a;
	cin >> n >> m >> a;
	long long int xCount, yCount;
    if(n%a == 0){
        xCount = n/a;
    }else{
        xCount = (n/a + 1);
    }
    if(m%a == 0){
        yCount = m/a;
    }else{
        yCount = (m/a + 1);
    }
    cout << xCount * yCount;
}