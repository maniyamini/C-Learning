#include<iostream>
using namespace std;
int main()
{
    // string a = "Welcome to c++";
    // string a("welcome to c++");
    /* concatenation */
    string firstName = "Manigandan";
    string lastName = "A";
    cout<<firstName+" "+lastName<<endl;
    /* append */
    cout<<firstName.append(lastName)<<endl;
    /* access */
    cout<<firstName[0]<<endl;
    firstName[4]='k';
    cout<<firstName<<endl;

    /* Input Functions */
    string str;
    cout<<"Enter a String: ";
    cin>>str;
    cout<<"The string is: "<<str<<endl;
    fflush(stdin);
    cout<<"Enter a String: ";
    getline(cin,str);
    cout<<"The string is: "<<str<<endl;
    str.push_back('n'); // It only for accepts single character.
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;

    /* Capacity Functions */
    string a("Manigandan");
    cout<<"Size: "<<a.size()<<endl;
    cout<<"Length: "<<a.length()<<endl;
    cout<<"Max Size: "<<a.max_size()<<endl;

    /* Iterator Functions */
    string::iterator it;
    for(it=a.begin();it!=a.end();it++)
    {
        cout<<*it<<endl;
    }
    string::reverse_iterator it2;
    for(it2=a.rbegin();it2!=a.rend();it2++)
    {
        cout<<*it2<<endl;
    }

    /* Manipulating Functions */
    string x = "Ram";
    string y = "Sam";
    cout<<"Before X : "<<x<<endl;
    cout<<"Before Y : "<<y<<endl;
    x.swap(y);
    cout<<"After X : "<<x<<endl;
    cout<<"After Y : "<<y<<endl;
    return 0;
}