
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a = 10, b = 100;
    bool result;
    result = (a>b && a==b);
    cout<<"a>b && a==b "<<result<<endl;
    result = (a!=b && a==b);
    cout<<"a!=b && a==b "<<result<<endl;
    result = (a<b || a==b);
    cout<<"a<b || a==b "<<result<<endl;
    result = (a<=b && a==b);
    cout<<"a<=b && a==b "<<result<<endl;
    result = (a>=b || a<b);
    cout<<"a>=b || a<b "<<result<<endl;
    return 0;
    //logical operators
}