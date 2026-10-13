/*
design two classes , rectangle and circle each with provate dimensions , create friend function that compares their
area s and print which shape is larger .
discucc why a friend function is suitable here 

*/

#include <bits/stdc++.h>
using namespace std;
 
class circle;

class rectangle
{
    double length,breath;
    public:

    void getdata(int l, int b)
    {
        length = l;
        breath = b;

    }

    friend void compare(const rectangle& , const circle& );

};

class circle
{

    double radius;
    public:

    void getdata(double r)
    {
        radius = r;
    }

    friend void compare(const rectangle& , const circle& );
};


  void compare(const rectangle& R , const circle& C)
    {

        double area1 = R.length * R.breath;
        double area2 = 3.14 * C.radius * C.radius;

        if(area1 > area2)
        {
            cout<<"area of rectangle is larger"<<endl;
        }
        else
        {
            cout<<"area of circle is larger"<<endl;
        }

    }

    int main()
    {
      rectangle r1;
      circle c1;
      r1.getdata(10,20);
      c1.getdata(20);


      compare(r1,c1);  


    }