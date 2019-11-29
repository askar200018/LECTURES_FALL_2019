#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    deque<char> dq;
    
    for(int i = 0; i < s.size(); i++){
        if(dq.empty() == true)  
            dq.push_back(s[i]);
        else {
            char temp = dq.back();
            if(temp == '1' && s[i] == '1')
                dq.pop_back();
            else 
                dq.push_back(s[i]);
        }
    }
    while(dq.empty() == false){
        cout << dq.front();
        dq.pop_front();
    }
    return 0;
}