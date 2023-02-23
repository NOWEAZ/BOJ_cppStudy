//2440번
#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int row;
    cin >> row;
    if(row < 0 && row > 100)
        return 1;  
    for(int i = 0; i < row; i++) {
        for(int j = row - i; j > 0; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}