//5565번
#include <iostream>
using namespace std;
int main(){
    int totalPrice = 0; cin >> totalPrice;
    int totalReadAblePrice = 0;
    int ReadAblePrice = 0;
    for(int i = 0; i < 9; i++){
        cin >> ReadAblePrice;
        totalReadAblePrice += ReadAblePrice;
        if(ReadAblePrice > 10000)
            return 1;
    }
    cout << totalPrice - totalReadAblePrice << endl;
    return 0;
}