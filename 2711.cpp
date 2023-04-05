//2711번
#include <iostream>
#include <string>
using namespace std;
int main(){
    int T;  cin >> T;
    int N;  string str;
    for(int i = 0; i < T; i++){
        cin >> N >> str;
        for(int i = 0; i < str.length(); i++){
            if(i != N-1)
                cout << str[i];
        }
    cout << endl;
    }
    return 0;
}