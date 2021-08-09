#include <iostream>
using namespace std;

//create a rectangle class, default will be private
class rectangle
{
    private:
        int length;
        int breadth;
    public:
        //constructor
        rectangle(int len, int br)
        {
            length = len;
            breadth = br;
        }
        rectangle()
        {
            length = 100;
            breadth = 50;
        }
        void get_perimeter()
        {
            cout<<2*(length+breadth)<<endl;
        }

        void get_area()
        {
            cout<<length*breadth<<endl;
        }

        //this is called as a copy constructor
        rectangle (rectangle &r)
        {
            length = r.length;
            breadth = r.breadth;
        }
};
int main()
{
    rectangle r1;
    r1.get_area();
    rectangle r2(200,100);
    r2.get_area();
    rectangle r3 = r2;
    r3.get_area();
    return 0;
}