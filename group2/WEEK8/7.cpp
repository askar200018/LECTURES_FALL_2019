#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;


int main(){
    string s , t;
    getline(cin , s);
    stringstream x(s);
    
    while(getline(x, t , ' ')){
        cout << t << endl;
    }
    return 0;
}