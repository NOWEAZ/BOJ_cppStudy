//3460번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int T, n;  cin >> T;
    vector<int> binArr;
    for(int i = 0; i < T; i++){ //케이스 수 만큼 반복
        cin >> n;
        while(n != 0){ //2진수로 변환
            if(n % 2 == 1)
                binArr.push_back(1);
            else
                binArr.push_back(0);
            n /= 2;
        }
        for(int j = 0; j < binArr.size(); j++){ //1위치 출력
            if(binArr[j] == 1)
                cout << j << " ";
        }
        cout << endl;
        binArr.clear();
    }
    return 0;
}