#include <iostream>
using namespace std;

class brian{
    public:
        unsigned int numsets(int n)
        {
               unsigned int x=0;
                while(n){
                     n &= (n-1);
                     x++;
                }
                return x;

        }
};
int main(){
    brian algo;
    int i;
    cin >> i;
    cout << algo.numsets(i) << "\n";
    return 0;
}