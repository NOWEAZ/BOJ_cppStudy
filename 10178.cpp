//10178번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int testCase, c, v;
    vector <int> cc, vv;
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> c;   cin >> v;
        cc.push_back(c);    vv.push_back(v);
        if(c < 1 || v > 1000)
            return 1;
    }
    for(int i = 0; i < testCase; i++){
        cout << "You get " << cc[i] / vv[i] << " piece(s) and your dad gets " << cc[i] % vv[i] << " piece(s)." << endl;
    }
    return 0;
}