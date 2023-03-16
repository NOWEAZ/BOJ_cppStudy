//2581번
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main(){
    vector<int> arr;
    int M, N, sum, count = 0;
    cin >> M >> N;
    for (int i = M; i < N; i++){
        for(int j = 1; j <= i; j++){
            if(i % j == 0)
                count ++;
        }
        if(count == 2)
            arr.push_back(i);
        count = 0;
    }
    if(arr.size() == 0){
        cout << -1 << endl;
        return 0;
    }
    sum = accumulate(arr.begin(), arr.end(), 0);
    cout << sum << endl << arr[0] << endl;
    return 0;
}