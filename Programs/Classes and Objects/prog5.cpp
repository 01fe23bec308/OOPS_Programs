#include<iostream>
using namespace std;
class rectangle
{
private:
    int w,l;
public:
    void set_values(int,int);
    int area()
    {
        return w*l;
    }

};

void rectangle :: set_values(int x,int y)
    {
     w=x;
     l=y;
    }
int main()
{
    rectangle r1;
    r1.set_values(5,5);
    cout<<"area= "<<r1.area()<<endl;
    return 0;
}
