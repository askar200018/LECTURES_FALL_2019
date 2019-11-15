#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    set<int> st;
    while(true){
        cin >> n;
        if(n == 0)
            break;
        st.insert(n);
    }
    set<int>::reverse_iterator it;
    it = st.rbegin();
    cout << *it << endl;
    // set<int>::iterator it;
    // for(it = st.begin(); it != st.end(); it++){
    //     cout << *it << " ";
    // }
    return 0;
}