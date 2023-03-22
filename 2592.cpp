//2592번
#include <iostream>
using namespace std;
int main(){
    int a[10];
    int b[1001] {};
    int num, sum = 0, max = 0;
    for(int i = 0; i < 10; i++){
        cin >> a[i];
        sum += a[i];
        b[a[i]]++;
    }
    for(int i = 0;i < 1001; i++){
        if(b[i] > max){
            max = b[i];
            num = i;
        }
    }
    cout << sum / 10 << endl << num;
    return 0;
}