//1408번
#include <iostream>
#include <string>
#include <vector>
#include<sstream>
using namespace std;

void getTime(vector<string> v1, vector<string> v2);

int main(){
    string curTime, startTime;
    cin >> curTime >> startTime;

    istringstream ss(curTime);
    istringstream ss2(startTime);

    vector<string>v, v2;
    v.clear(); v2.clear();

    while(getline(ss, curTime, ':'))
        v.push_back(curTime);
    while(getline(ss2, startTime, ':'))
        v2.push_back(startTime);

    getTime(v, v2);
    return 0;
}

void getTime(vector<string> v1, vector<string>v2) {
    int res, sTime, cTime, resTime, resMin, resSec;

    cTime = stoi(v1[0]) * 3600 + stoi(v1[1]) * 60 + stoi(v1[2]);
    sTime = stoi(v2[0]) * 3600 + stoi(v2[1]) * 60 + stoi(v2[2]);
    res = sTime - cTime;
    if(res <= 0)
        res = 24 * 3600 + res;

    resTime = res / 3600;
    resMin = (res - resTime*3600) / 60;
    resSec = (res - resTime*3600 - resMin*60);

    printf("%02d:%02d:%02d\n",resTime, resMin, resSec);
}