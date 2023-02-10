//2438번
#include<iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    if(N < 0 && N > 100)
        return 1;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j <= i; j++)
            cout << "*";
        cout << "\n";
    }
    return 0;
}