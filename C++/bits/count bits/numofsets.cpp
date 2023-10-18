#include <iostream>
using namespace std;

unsigned int num_of_sets(unsigned int x){
    unsigned int res =0;
    while(x){
        res += x&1;
        x>>=1;
    }
    return res;

}
int main(){
    int a;
    cin >>a;
    int b= num_of_sets(a);
    cout << "the number of sets is " << b << "\n";
}