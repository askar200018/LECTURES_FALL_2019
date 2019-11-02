#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> st;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.insert(x);
    }
    cout << st.size() << endl;
    set<int>::iterator it;
    for(it = st.begin(); it != st.end(); it++)
        cout << *it << " ";
    return 0;
}