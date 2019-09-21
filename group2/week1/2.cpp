#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int hour;
    cin >> hour;
    if(hour >= 9 && hour < 12){
        cout << "Good morning";
    }else if(hour >= 12 && hour < 17){
        cout << "good day";
    }
    else{
        cout << "good evening";
    }
    return 0;
}