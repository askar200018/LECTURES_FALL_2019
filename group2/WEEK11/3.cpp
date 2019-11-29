#include <iostream>
#include <stack>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    string s;
    cin >> s;
    stack<char> st;
    map<char, int> mp;
    mp['('] = 1;
    mp[')'] = 1;
    mp['{'] = 2;
    mp['}'] = 2;
    mp['['] = 3;
    mp[']'] = 3;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else{
            if(st.empty() == true){
                cout << "NO";
                return 0;
            }else {
                char temp = st.top();
                if(mp[s[i]] == mp[temp]){
                    st.pop();
                }else{
                    cout << "NO";
                    return false;
                }
            }
        }
    }
    if(st.empty() == true)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}