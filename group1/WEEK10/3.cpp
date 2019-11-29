#include <iostream>
using namespace std;

bool isFav(int n, int sum,int last){
    if(n == 0){
        if(sum % last == 0)
            return true;
        return false;
    }
    return isFav(n / 10, sum + n % 10, last);
}

bool isFav2(string s, int sum, int i){
    if(i == s.size()){
        int last = s[s.size() - 1] - '0';
        if(sum % last == 0)
            return true;
        return false;
    }
    return isFav2(s, sum + s[i] - '0', i + 1);
}

int main(){
    // int n;
    // cin >> n;
    // if(isFav(n, 0, n % 10) == true)
    //     cout << "YES";
    // else 
    //     cout << "NO";
    
    string s;
    cin >> s;
    if(isFav2(s, 0, 0) == true){
        cout << "YES";
    }else 
        cout << "NO";
    return 0;
}