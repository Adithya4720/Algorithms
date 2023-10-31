#include <iostream>
using namespace std;

//checking wether a given number is power of 2 or not it is by doing & operation between n and n-1 if its 0 then its power of 2 like if its 4 &3 => 100&011 => 0;
int power(int x){
    if( x & (x-1) == 0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int a;
    cin >> a;
    int b= power(a);
    cout << "the solution is " << b << "\n";
    return 0;
}