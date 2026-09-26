
// Write a cpp program to find the largest of number in the list.

#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,5,7,10,21,22,3,8,2}; 
    int lar=0,n=10;                     
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=lar)
            lar=arr[i];
        else
            lar=lar;
    }
    cout<<"the largest of numbers is "<<lar;
    return 0;
}
*/
int main()
{
    int lar,n;
    cout<<"Enter the no of numbers you want in a List to Find the largest \n";


}
