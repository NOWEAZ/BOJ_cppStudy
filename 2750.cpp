//2750번
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N, num, tmp;  cin >> N;
    vector<int> arr;
    for(int i = 0; i < N; i++){
        cin >> num;
        arr.push_back(num);
    }
    /*for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(arr[i] > arr[j]){
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;                
            }
        }
    }*/
    sort(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }
    return 0;
}
