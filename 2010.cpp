//2010번
#include <iostream>
using namespace std;
int main(){
    int N;  cin >> N;
    int a, result = 0;
    for(int i = 0; i < N; i++){
        cin >> a;   result += a;
    }
    result = result - N + 1;
    cout << result;
    return 0;
}