//9085번
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main(){
    int T, N, I;
    vector<int> arr;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> N;
        for(int i = 0; i < N; i++){
            cin >> I;
            arr.push_back(I);
        }
        cout << accumulate(arr.begin(), arr.end(), 0) << endl;
        arr.clear();
    }
    return 0;
}