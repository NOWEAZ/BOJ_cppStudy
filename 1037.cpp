//1037번
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int A, num;  cin >> num;
    vector<int> v;
    for(int i = 0; i < num; i++){
        cin >> A;   v.push_back(A);
    }
    sort(v.begin(), v.end());
    cout << v[0] * v[v.size() - 1] << endl;
    return 0;
}   
