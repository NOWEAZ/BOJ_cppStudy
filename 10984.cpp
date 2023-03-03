//10984번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int T; cin >> T;
    int N; int C; float G;
    int count = 0, totalC = 0;
    float totalG = 0;
    vector <int> vC;
    vector <float> vG;
    while (1){
        cin >> N;
        for(int i = 0; i <= N; i++){
            cin >> C; cin >> G;
            totalC += C; totalG += G;
            vC.push_back(totalC);
            vG.push_back(totalG / (float)N);
        }
        count ++;
        if(count > T)
            break;
    }
    return 0;
}