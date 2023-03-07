//10984번
#include <iostream>
using namespace std;
int main(){
    int T, N, C;
    float totalC, totalG, GPA, G;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> N;
        for(int j = 0; j < N; j++){
            cin >> C;   cin >> G;
            totalC += C;    totalG += ((float)C * G);
        }
        cout.precision(2);
        cout << totalC << " " << totalG / totalC << endl;
        totalC = 0; totalG = 0;
        }
    return 0;
} 