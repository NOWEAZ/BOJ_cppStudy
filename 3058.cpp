//3058번
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int T, N, minVal, sum = 0;  cin >> T;
    vector<int> v;  vector<int> evenV;
    while(T--){
        for(int i = 0; i < 7; i++){
            cin >> N;   v.push_back(N);
        }
        for(int i = 0; i < 7; i++){
            if(v[i] % 2 == 0){
                sum += v[i];
                evenV.push_back(v[i]);
            }
        }
        minVal = evenV[0];
        for(int i = 0; i < evenV.size(); i++)
            minVal = min(minVal, evenV[i]);           
        cout << sum << " " << minVal << endl;
        v.clear();  evenV.clear();  sum = 0;
    }
    return 0;
}