#include <iostream>
using namespace std;

int main()
{

    // int mars = 5;
    // int earth = 6;
    // double neptune = mars / (double)earth * 100;
    // cout << neptune << "%\n";

    // double jupiter=(int)6.78;
    // cout<<jupiter<<endl;

    // int sun =65;
    // cout << (char)sun<<endl;

    // char t=100;
    // cout<<(int)t;

    std::string name;
    int age;
    // cout<<"Enter your name:";
    // getline(cin, name);
    // cout<<"Enter your age:";
    // cin>>age;
    // cout<<"your name is "<<name<<" and your age is "<<age;

    cout<<"Enter your age:";
    cin>>age;
    cout<<"Enter your full name:";
    getline(cin >>ws, name);
    
    cout<<"your name is "<<name<<" and your age is "<<age;


    return 0;
}