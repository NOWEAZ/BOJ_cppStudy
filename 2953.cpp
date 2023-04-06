//2953번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int score, sum = 0;
    vector<int> v;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            cin >> score;
            sum += score;
        }
        v.push_back(sum);
        sum = 0;
    }
    int maxIndex = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[maxIndex] < v[i])
            maxIndex = i;
    }
    cout << maxIndex + 1 << " " << v[maxIndex] << endl;
    return 0;
}