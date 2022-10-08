#include <iostream>
using namespace std;
int main() {
    int* NUM;
   NUM = new int ;
    *NUM = 33;
    cout <<"Memory address "<<NUM <<endl;
    cout <<"Memory address value "<<*NUM <<endl;
    delete NUM;
    return 0;
}

