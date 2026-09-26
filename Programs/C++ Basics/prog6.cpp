// write a cpp program to find the length of the string 1.using C-style 2.using C++-style

//1.using C-style

#include<iostream>
#include<cstring> // if you use strlen(str) you need this;
using namespace std;
/*

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Length of the string = " << strlen(str);

    return 0;
}

*/
// 2.using C++ Style
int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Length of the string = " << str.length();

    return 0;
}
