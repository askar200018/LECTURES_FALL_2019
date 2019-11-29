#include <iostream>
#include <queue>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<pair<int,int> > q;
    q.push(make_pair(n, 0));
    while(true){
        pair<int,int> p = q.front();
        int value = p.first;
        int index = p.second;
        q.pop();
        if(value == 1){
            cout << index << endl;
            return 0;
        }
        if(value % 3 == 0)
            q.push(make_pair(value / 3, index + 1));
        if(value % 2 == 0)
            q.push(make_pair(value / 2, index + 1));
        q.push(make_pair(value - 1, index + 1));
    }
    return 0;
}