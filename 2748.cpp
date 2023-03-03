//2748번
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(0); v.push_back(1);
    int n;  cin >> n;
    if (n > 90)
        return 1;
    for(int i = 2; i <= n; i++)
        v.push_back(v[i-2] + v[i-1]);
    cout << v[n];
    return 0;
}
/*#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector <long long> v(n + 1);
    v[0] = 0; v[1] = 1; v[2] = 1;
    for(int i = 3; i <= n; i ++)
        v[i] = v[i - 1] + v[i - 2];
    cout << v[n];
    return 0;
}*/