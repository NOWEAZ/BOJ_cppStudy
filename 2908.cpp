//2908번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> reverseArr;
    int A, B;   cin >> A >> B;

    if(A % 10 > B % 10){ //1의 자리수 A가 더 클 때
        reverseArr.push_back(A % 10);
        reverseArr.push_back((A - A % 10) % 100 / 10);
        reverseArr.push_back(A / 100);
    }
    else if(A % 10 < B % 10){ //1의 자리수 B가 더 클 때
        reverseArr.push_back(B % 10);
        reverseArr.push_back((B - B % 10) % 100 / 10);
        reverseArr.push_back(B / 100);
    }
    else if(A % 10 == B % 10){ //1의 자리수 A와 B가 같을 때
        reverseArr.push_back(A % 10);
        if((A - A % 10) % 100 / 10 > (B - B % 10) % 100 / 10){ //2의 자리수 A가 더 클 때
            reverseArr.push_back((A-A%10)%100/10);
            reverseArr.push_back(A/100);
        }
        else if((A - A % 10) % 100 / 10 < (B - B % 10) % 100 / 10){ //2의 자리수 B가 더 클 때
            reverseArr.push_back((B-B%10)%100/10);
            reverseArr.push_back(B/100);
        }
        else if((A - A % 10) % 100 / 10 == (B - B % 10) % 100 / 10){ //2의 자리수 A와 B가 같을 때
            reverseArr.push_back((A - A % 10) % 100 / 10);
            if(A / 100 > B / 100) //3의 자리수 A가 더 클 때
                reverseArr.push_back(A/100);
                
            else if(A / 100 < B / 100) //3의 자리수 B가 더 클 때
                reverseArr.push_back(B/100);

            else if(A / 100 == B / 100) //3의 자리수 A와 B가 같을 때
                return 1;
        }
    } 
    for(int i = 0; i < reverseArr.size(); i++)
        cout << reverseArr[i];    
    return 0;
}