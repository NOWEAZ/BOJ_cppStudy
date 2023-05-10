//2693번
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int T, N;  cin >> T;
    vector<int> v;
    for(int i = 0; i < T; i++){
        for(int j = 0; j < 10; j++){
            cin >> N;
            v.push_back(N);
        }
        sort(v.begin(), v.end(), greater<int>());
        cout << v[2] << endl;
        v.clear();
    }
    return 0;
}