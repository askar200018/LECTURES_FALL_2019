#include <iostream>
using namespace std;


bool isPostalCode(string s, int a, int b){
    for(int i = 0; i < a; i++){
        if(s[i] < '0' || s[i] > '9')
            return false;
    }
    if(s[a] != '-')
        return false;
    for(int i = a + 1;i < s.size(); i++){
        if(s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}

int main(){
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    if(isPostalCode(s, a, b) == true)  
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}