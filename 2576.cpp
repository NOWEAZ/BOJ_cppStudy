//2576번
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main(){
    vector<int> arr;
    int n, minIndex = 0;
    for(int i = 0; i < 7; i++){
        cin >> n;
        if(n % 2 == 1)
            arr.push_back(n);
    }
    for(int i = 0; i < arr.size(); i++){
        if(arr[minIndex] > arr[i])
            minIndex = i;
    }
    if(arr.size() > 0)
        cout << accumulate(arr.begin(), arr.end(), 0) << endl << arr[minIndex] << endl;
    else
        cout << -1 << endl;
    return 0;
}