//10871번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, X, integer;   cin >> N >> X;
    vector <int> seq;
    for(int i = 0; i < N; i++){
        cin >> integer;
        seq.push_back(integer);
    }
    for(int i = 0; i < N; i++){
        if(seq[i] < X)
            cout << seq[i] << " ";
    }
    return 0;
}