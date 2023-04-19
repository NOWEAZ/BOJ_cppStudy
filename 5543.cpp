//5543번
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int price;
    vector<int> hamburgerPrice;
    vector<int> beveragePrice;
    for(int i = 0; i < 3; i++){
        cin >> price;   hamburgerPrice.push_back(price);
    }
    for(int i = 0; i < 2; i++){
        cin >> price;   beveragePrice.push_back(price);
    }
    sort(hamburgerPrice.begin(), hamburgerPrice.end());
    sort(beveragePrice.begin(), beveragePrice.end());
    cout << hamburgerPrice[0] + beveragePrice[0] - 50 << endl;
    return 0;
}