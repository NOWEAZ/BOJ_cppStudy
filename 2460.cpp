//2460번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> InPassenger;
    vector<int> OutPassenger;
    vector<int> CurPassenger;
    int passengerNum, maxValue = 0;

    for(int i = 0; i < 20; i++){
        cin >> passengerNum;
        if(i % 2 == 1)
            InPassenger.push_back(passengerNum);
        else if(i % 2 ==0)
            OutPassenger.push_back(passengerNum);
    }
    for(int i = 0; i < InPassenger.size(); i++){
        CurPassenger.push_back(InPassenger[i] - OutPassenger[i]);
    }
    for(int i = 1; i < CurPassenger.size(); i++){
        CurPassenger[i] = CurPassenger[i] + CurPassenger[i-1];
    }
    for(int i = 0; i < CurPassenger.size(); i++){
        if(CurPassenger[i] > maxValue)
            maxValue = CurPassenger[i];
    }
    cout << maxValue << endl;
    return 0;
}