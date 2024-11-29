// Link : https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	string s;
    cin >> s;
    int i;
    vector<int> vec1;
    for(i = 0; i < s.length(); i++){
        if(s[i] == '1') vec1.push_back(1);
        else if(s[i] == '2') vec1.push_back(2);
        else if(s[i] == '3') vec1.push_back(3);
        else if(s[i] == '+'){
            continue;
        }
    }
    sort(vec1.begin(), vec1.end());
    for(i = 0; i < vec1.size(); i++){
        cout << vec1[i];
        if(i < vec1.size() - 1){
            cout << "+";
        }
    }
    
    return 0;
}