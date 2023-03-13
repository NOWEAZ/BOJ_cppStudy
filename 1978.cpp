//1978번
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int N, num, a; cin >> N;
    vector <int> arr;
    for(int i = 0; i < N; i++){
        cin >> num;
        a = sqrt(num);
        for(int j = 2; j <= a; j++){
            if(num % j != 0 && num >= 2)
            arr.push_back(num);
        }
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}