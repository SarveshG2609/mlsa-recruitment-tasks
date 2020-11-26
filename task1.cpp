#include <iostream>

using namespace std;

int main()
{   int x,y,z; 
    cout << "Enter values of x, y, z"<<endl;
    cin>>x>>y>>z;
     int a= y - y%x;
    if (a<=z)
        cout <<"YES";
    else
     cout<<"NO"; 
    return 0;
}