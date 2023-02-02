//5635번
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student{
    string name;
    int date, mon, year;
};

bool compare (const struct Student &x, const struct Student &y){
    if(x.year < y.year)
        return true;
    else if (x.year == y.year){
        if(x.mon < y.mon)
            return true;
        else if(x.mon == y.mon){
            if(x.date < y.date)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

int main(){
    int n;
    cin >> n;
    vector<Student> v;

    for(int i = 0; i < n; i++){
        string name;
        int date, mon, year;
        cin >> name >> date >> mon >> year;
        v.push_back({name, date, mon, year});
    }
    sort(v.begin(), v.end(), compare);
    cout << v[n-1].name << endl << v[0].name << endl;
    return 0;
}