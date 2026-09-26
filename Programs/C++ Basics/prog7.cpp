#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    int len, flag = 0;

    cout << "Enter a string: ";
    cin >> str;

    len = strlen(str);

    for(int i = 0; i < len / 2; i++)
    {
        if(str[i] != str[len - 1 - i])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        cout << "The string is a palindrome";
    else
        cout << "The string is not a palindrome";

    return 0;
}
