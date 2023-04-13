//10818번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, num;  cin >> N;
    vector<int> arr;
    for(int i = 0; i < N; i++){
        cin >> num;
        arr.push_back(num);
    }
    int maxIdx = 0, minIdx = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > arr[maxIdx])
            maxIdx = i;
        if(arr[i] < arr[minIdx])
            minIdx = i;
    }
    cout << arr[minIdx] << " " << arr[maxIdx] << endl;
    return 0;
}