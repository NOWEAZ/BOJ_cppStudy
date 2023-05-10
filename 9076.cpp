//9076번
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int T, N;  cin >> T;
    vector<int> v;
    for(int i = 0; i < T; i++){
        for(int j = 0; j < 5; j++){
            cin >> N;
            v.push_back(N);
        }
        sort(v.begin(), v.end());
        if(v[3] - v[1] >= 4)
            cout << "KIN" << endl;
        else
            cout << v[1] + v[2] + v[3] << endl;
        v.clear();
    }
    return 0;
}