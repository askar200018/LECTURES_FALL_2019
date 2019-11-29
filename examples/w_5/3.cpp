#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    // queue<int> q;
    // q.push(n);
    // int i = 0;
    // while(true){
    //     vector<int> v;
    //     while(!q.empty()){
    //         int x = q.front();
    //         if(x == 1){
    //             cout << i;
    //             return 0;
    //         }
    //         q.pop();
    //         if(x % 3 == 0)
    //             v.push_back(x / 3);
    //         if(x % 2 == 0)
    //             v.push_back(x / 2);
    //         v.push_back(x - 1);
    //     }
    //     for(int i = 0; i < v.size(); i++){
    //         q.push(v[i]);
    //         cout << v[i] << " ";
    //     } cout << endl;
    //     i++;
    // }
    int i = 0;
    while(true){
        if(n == 1){
            cout << i;
            return 0;
        }
        cout << n << endl;
        if(n % 3 == 0)
            n /= 3;
        else if(n % 2 == 0)
            n /= 2;
        else 
            n -= 1;
        i++;
    }
    return 0;
}