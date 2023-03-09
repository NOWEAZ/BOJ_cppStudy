//9295번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int T, a, b, sum = 0;  cin >> T;
    vector <int> arr;
    for(int i = 0; i < T; i++){
        cin >> a >> b;
        sum = a + b;
        arr.push_back(sum);
    }
    for(int i = 0; i < T; i++)
        cout << "Case " << i + 1 << ": " << arr[i] << endl;

    return 0;
}