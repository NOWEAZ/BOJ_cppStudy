//3052번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    vector<int> v;
    for(int i = 0; i < 10; i++){
        cin >> n;
        int index = n % 42;
        v[index]++;
    }
    cout << v.size() << endl;
    return 0;
}