//2577번
#include <iostream>
#include <string>
using namespace std;
int main(){
    int A, B, C, ABC, count[10] = {};    cin >> A >> B >> C;
    ABC = A * B * C;
    string s = to_string(ABC);
    for(char ch : s) //s 한자리씩 꺼내기
        count [ch - '0']++; //count 각 인덱스 1 증가
    for(int v : count){ //count 출력
        cout << v << endl;
    }
    return 0;
}