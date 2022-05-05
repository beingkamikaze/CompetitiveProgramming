#include <iostream>
using namespace std;

int main()
{
    char str[]="A string";
    char *p=str;
    cout<<str[0]<<' '<<*p<<' '<<p[3]<<endl;
    p = p+2;
    cout<<*p<<' '<<str[4]<<' '<<str[7];
}
