//9325번
#include <iostream>
using namespace std;
int main(){
    int testCase, carPrice, options, p, q;
    cin >> testCase;
    for(int i = 0; i < testCase; i++){
        cin >> carPrice;    cin >> options;
        if(carPrice < 1 || carPrice > 100000)
            return 1;
        if(options < 0 || options > 1000)
            return 1;
        for(int j = 0; j < options; j++){
            cin >> q;   cin >> p;
            if(q < 1 || q > 100)
                return 1;
            if(p < 1 || p > 100)
                return 1;
            carPrice = carPrice + (p * q);
        }
        cout << carPrice << endl;
    }
    return 0;
}