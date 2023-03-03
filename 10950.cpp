//10950번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int T; cin >> T;
    int A, B;
    vector <int> v;
    for(int i = 0; i < T; i++){
        cin >> A >> B;
        if (A <= 0 || B >= 10)
            return 1;
        v.push_back(A + B);
    }
    for(int i = 0; i < T; i++)
        cout << v[i] << endl;
    return 0;
}