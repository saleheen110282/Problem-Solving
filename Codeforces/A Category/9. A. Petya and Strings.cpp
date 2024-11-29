// Link : https://codeforces.com/problemset/problem/112/A

#include<iostream>
#include <cstring>

using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int length = s1.length();
    for(int i = 0; i < length; i++){
        if(isupper(s1[i])){
            s1[i] = tolower(s1[i]);
        }
        if(isupper(s2[i])){
            s2[i] = tolower(s2[i]);
        }
    }
    if(s1 < s2) cout << "-1";
    else if(s1 == s2) cout << "0";
    else cout << 1;
    return 0;
}