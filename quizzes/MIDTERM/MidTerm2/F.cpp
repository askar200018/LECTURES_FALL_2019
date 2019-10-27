#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int first = 4;
    int second = 7;
    for(int i = 4; i <= n; i++){
        int temp = i;
        bool check = true;
        while(temp > 0){
            int ost = temp % 10;
            if(ost != 4 && ost != 7){
                check = false;
                break;
            }
            temp /= 10;
        }
        if(check)
            cout << i << endl;
    }
    return 0;
}