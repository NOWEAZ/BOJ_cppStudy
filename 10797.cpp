//10797번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int date;   cin >> date;
    int carNum, count = 0;
    vector<int> carNumArr;
    for(int i = 0; i < 5; i++){
        cin >> carNum;
        carNumArr.push_back(carNum);
    }
    for(int i = 0; i < carNumArr.size(); i ++){
        if(carNumArr[i] % 10 == date)
            count++;
    }
    cout << count << endl;
    return 0;
}