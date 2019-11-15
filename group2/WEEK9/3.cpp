#include <iostream>
#include <set>
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
    set<int>::reverse_iterator it;
    for(it = st.rbegin(); it != st.rend(); it++){
        cout << *it << " ";
    }
    return 0;
}