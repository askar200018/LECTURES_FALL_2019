#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;


int main(){
    string s , t;
    string maxi = "";
    getline(cin , s);
    stringstream x(s);
    
    while(getline(x, t , ' ')){
        if(t.size() > maxi.size())
            maxi = t;
    }
    cout << maxi.size() << endl << maxi;
    return 0;
}