#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int countOdd = 0 , countEven = 0;
    for(int i = 0; i < n;i++){
        int x;
        cin >> x;
        if(x % 2 == 0){
            countEven++;
        }else
        {
            countOdd++;
        }
        
    }
    cout << countEven << " " << countOdd;
    return 0;
}