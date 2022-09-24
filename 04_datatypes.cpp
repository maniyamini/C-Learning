#include<iostream>
using namespace std;
int main()
{
    // I give input like mani gandan. It takes only mani.
    string a;
    cout<<"Enter a name: "<<endl;
    cin>>a;
    cout<<"The name is: "<<a;
    // It takes total line.
    string b;
    cout<<"Enter a name: "<<endl;
    getline(cin,b);
    cout<<"The name is: "<<b;
    int a1,b1;
    cout<<"Enter the integer values: "<<endl;
    cin>>a1>>b1;
    cout<<"The addition of a1 and b1 is: "<<a1+b1;
    float a2,b2;
    cout<<"Enter the float values: "<<endl;
    cin>>a2>>b2;
    cout<<"The addition of a2 and b2 is: "<<a2+b2;
    char a3;
    cout<<"Enter the character: "<<endl;
    cin>>a3;
    cout<<"The character is: "<<a3;
    return 0;
}