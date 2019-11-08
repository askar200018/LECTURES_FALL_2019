#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
#include <set>
using namespace std;

int main(){

    set<int, greater<int>> st;
    st.insert(9);
    st.insert(12);
    st.insert(1);
    st.insert(9);
    st.insert(3);
    set<int, greater<int>>::iterator it;
    for(it = st.begin(); it != st.end(); it++){
        cout << *it << " ";
    }
    return 0;
}