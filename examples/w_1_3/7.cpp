#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.insert(x);
    }
    int sum = 0;
    set<int>::iterator it;
    for(it = st.begin(); it != st.end(); it++)
        sum += *it;
    cout << sum;
    return 0;
}