//2501번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr;
    int N, K;
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        if(N % i == 0)
            arr.push_back(i);
    }
    if(arr.size() < K)
        cout << 0 << endl;
    else
        cout << arr[K - 1] << endl;
    return 0;
}