//5800번
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int K, N, X, score, minScore, maxScore, gap;
    cin >> K;   X = K;
    vector<int> scoreArr;   vector<int> gapArr;
    while(K--){
        cin >> N;
        for(int i = 0; i < N; i++){
            cin >> score;   scoreArr.push_back(score); 
        }
        sort(scoreArr.rbegin(), scoreArr.rend());
        
        for(int i = 0; i < scoreArr.size() - 1; i++){
            gap = scoreArr[i] - scoreArr[i+1];
            if(gap < 0)
                gap * -1;
            gapArr.push_back(gap);
        }
        sort(gapArr.begin(), gapArr.end());
        cout << "Class " << X - K << endl;
        cout << "Max " << scoreArr[0] << ", Min " << scoreArr[scoreArr.size() - 1] << ", Largest gap " << gapArr[gapArr.size() - 1] << endl;
        scoreArr.clear();   gapArr.clear();
    }
    return 0;
}