//1546번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;  cin >> N;
    if(N > 1000)
        return 1;
    float currentScore, maxValue = 0.0, sum = 0.0;
    vector<float> scoreArr;
    for(int i = 0; i < N; i++){
        cin >> currentScore;
        if(currentScore < 0 || currentScore > 100)
            return 1;
        scoreArr.push_back(currentScore);
    }
    for(int i = 0; i < scoreArr.size(); i++){
        if(scoreArr[i] > maxValue)
            maxValue = scoreArr[i];
    }
    for(int i = 0; i < scoreArr.size(); i++){
        sum += (scoreArr[i] / maxValue * 100);
    }
    cout << sum / (float)N << endl;    
    return 0;
}