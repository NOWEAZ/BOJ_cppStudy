//10569번
#include <iostream>
using namespace std;
int main(){
    int T, V, E, S;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> V >> E;
        S = 2 - V + E;
        cout << S << endl;
    }
    return 0;
}