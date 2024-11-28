// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[3], solve = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[0];
        cin >> arr[1];
        cin >> arr[2];
        if (((arr[0] == 1) && arr[1] == 1) || ((arr[0] == 1) && arr[2] == 1) || ((arr[1] == 1) && arr[2] == 1) || ((arr[0] == 1) && arr[1] == 1) && (arr[2] == 1)){
            solve++;
        }
    }
cout << solve;
    return 0;
}