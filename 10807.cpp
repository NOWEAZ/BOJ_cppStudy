//10807번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, num, v, count = 0; cin >> N;
    vector<int> arr;
    for(int i = 0; i < N; i++){
        cin >> num;
        arr.push_back(num);
    }
    cin >> v;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == v)
            count++;
    }
    cout << count << endl;
    return 0;
}