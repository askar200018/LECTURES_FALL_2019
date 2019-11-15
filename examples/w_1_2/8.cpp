#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int cnt[10];

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
        cnt[s[i] - 48]++;
    
    bool check = true;
    int temp = 0; 
    for(int i = 0; i < 10; i++){
        if(cnt[i] > 0 && check == true){
            temp = cnt[i];
            check = false;
        }else if(cnt[i] > 0){
            if(cnt[i] != temp){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}