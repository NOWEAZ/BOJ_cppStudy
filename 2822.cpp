//2822번
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int score, temp, sum = 0;
    vector<pair<int, int>> arr;
    vector<int> idx;
    for(int i = 0; i < 8; i++){
        cin >> score;
        arr.push_back(make_pair(score, i+1));
    }
    sort(arr.begin(), arr.end(), greater<pair<int, int>>());
    for(int i = 0; i < 5; i++){
        sum += arr[i].first;
        idx.push_back(arr[i].second);
    }
    cout << sum << endl;
    sort(idx.begin(), idx.end());
    for(int i = 0; i < idx.size(); i++){
        cout << idx[i] << " ";
    }
    cout << endl;
    return 0;
}