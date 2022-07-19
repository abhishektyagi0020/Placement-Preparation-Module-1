
#include <iostream>
using namespace std;
void main() {
    int a=11, b=22,c;
    c=a+b+ a++ + b++ + ++a + ++b;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
