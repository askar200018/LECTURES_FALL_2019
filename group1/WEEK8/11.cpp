#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
#include <set>
using namespace std;

int main(){

    set<int> st;
    st.insert(9);
    st.insert(12);
    st.insert(1);
    st.insert(9);
    st.insert(3);
    set<int>::reverse_iterator it;
    for(it = st.rbegin(); it != st.rend(); it++){
        cout << *it << " ";
    }
    return 0;
}