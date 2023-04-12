//3052번
#include <iostream>
using namespace std;
int main(){
    int n, index, count = 0, arr[42] = {0};
    for(int i = 0; i < 10; i++){
        cin >> n;
        index = n % 42;
        arr[index]++;
    }
    for(int i = 0; i < 42; i++){
        if(arr[i] != 0)
            count++;
    }
    cout << count << endl;
    return 0;
}