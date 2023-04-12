//1292번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int index = 0, sum = 0;
    int a, b;   cin >> a >> b;
    vector<int> arr(1000);
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < i && index < 1000; j++)
            arr[index++] = i;
    }
    for(int i = a-1; i < b; i++)
        sum += arr[i];
    cout << sum << endl;
    return 0;
}