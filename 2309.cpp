//2309번
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> height;
    int h, sum = 0;
    for(int i = 0; i < 9; i++){
        cin >> h;   height.push_back(h);
        sum += h;
    }

    sort(height.begin(), height.end());

    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 9; j++){
            if(sum -(height[i] + height[j]) == 100){
                for(int k = 0; k < 9; k++){
                    if(k != i && k != j)
                        cout << height[k] << endl;
                }
                return 0;
            }
        }
    }
    return 0;
}