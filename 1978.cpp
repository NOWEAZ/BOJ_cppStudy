//1978번
#include <iostream>
using namespace std;
int main(){
    int N, num, a = 0, result = 0; cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        for(int j = 1; j <= num; j++){
            if(num % j == 0)
                a++;
        }
        if(a == 2)
            result++;
        a = 0;
    }
    cout << result << endl;
    return 0;
}