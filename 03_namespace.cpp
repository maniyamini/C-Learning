#include<iostream>
namespace name1{
    int age = 23;
}
namespace name2{
    int age = 22;
}
using namespace name2;
int main()
{
    /* Not using namespace we put std in the front of cout, because iostream inside std and std
    inside all classes like cout,cin,endl etc..*/
    std::cout<<"Hello Mani"<<std::endl;
    std::cout<<age<<std::endl;
    std::cout<<name1::age;
}