//10833번
#include <iostream>
using namespace std;
int main(){
    int N, stu, apple, remainedApple, allocatedApple, result = 0;
    cin >> N;
    if(N < 1 || N > 100)
        return 1;
    for(int i = 0; i < N; i++){
        cin >> stu >> apple;
        allocatedApple = apple / stu;
        remainedApple = apple - (allocatedApple * stu);
        result += remainedApple;
        //stu = 0;    apple = 0;
    }
    cout << result << endl;
    return 0;
}