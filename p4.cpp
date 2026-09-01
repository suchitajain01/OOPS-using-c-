//radius of circle
#include <iostream>
using namespace std;

class circle
{
int r;

public:
void calculate(float);
float display();

};


void circle::calculate(float a)
{

    r =a;


}

float circle:: display()
{

float area = 3.14*r*r;
return(area);

}

int main()
{

    float r1;
    cin>>r1;

    circle c1;''
    c1.calculate(r1);
     float res = c1.display();
    cout<<"the area is:"<<res<<endl;

return 0;

}