//2587번
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int avg(vector<int> vect){
    int sum = 0;
    for(int i = 0; i < vect.size(); i++){
        sum += vect[i];
    }
    return sum / vect.size();
}
int median(vector<int> vect){
    sort(vect.begin(), vect.end());
    return vect[2];
}
int main(){
    int num;
    vector<int> v;
    for(int i = 0; i < 5; i++){
        cin >> num; v.push_back(num);
    }
    cout << avg(v) << endl << median(v) << endl;
    return 0;
}