//10952번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int A, B, count = 0;
    vector <int> v;
    while(1){
        cin >> A >> B;
        if(A <= 0 || B >= 10)
            break;
        v.push_back(A + B);
        count ++;
        if(A == 0 && B == 0)
            break;
    }
    for(int i = 0; i < count; i++)
        cout << v[i] << endl;
    return 0;
}