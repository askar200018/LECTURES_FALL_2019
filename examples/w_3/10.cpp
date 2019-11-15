#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> v, int i){
    if(i == v.size())
        return 0;
    return v[i] + sum(v, i + 1);
}

int main(){
    vector<int> v;
    while(true){
        int x;
        cin >> x;
        if(x == 0)
            break;
        v.push_back(x);
    }
    cout << sum(v, 0);
    return 0;
}