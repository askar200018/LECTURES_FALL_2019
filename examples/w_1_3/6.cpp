#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> st;
    st.insert(5);
    st.insert(4);
    st.insert(3);
    st.insert(5);
    st.insert(1);
    st.insert(9);
    // set<int>::iterator it; // i;
    // for(it = st.begin(); it != st.end(); it++){
    //     cout << *it << " ";
    // }
    set<int>::reverse_iterator it;
    for(it = st.rbegin(); it != st.rend(); it++)
        cout << *it << " ";
    // cout << endl;
    // cout << st.empty();
    return 0;
}