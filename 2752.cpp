//2752번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, tmp;
    vector<int> v;
    for(int i = 0; i < 3; i++){
        cin >> n;
        v.push_back(n);
    }
    for(int i = 0; i < v.size(); i++){
        for(int j = i + 1; j < v.size(); j++){
            if(v[i] > v[j]){
                tmp = v[j];
                v[j] = v[i];
                v[i] = tmp;
            }
        }
    }
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}