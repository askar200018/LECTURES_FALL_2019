#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    set<char> st;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        st.insert(s[i]);
    }
    cout << st.size() << endl;
    set<char>::iterator it;
    for(it = st.begin(); it != st.end(); it++)
        cout << *it << " ";
    return 0;
}