#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    // v.size();
    // v.push_back(x);
    // v.begin() v.end() v.pop_back()
    vector <int> v;
    v.push_back(5);
    v.push_back(9);
    v.push_back(3);
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    v.pop_back();
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}