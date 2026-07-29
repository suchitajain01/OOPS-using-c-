#include <bits/stdc++.h>
using namespace std;

int sum(int,int) //function declaration

int main()
{


int a,b,r;
cout<<"enter 2 nos";
cin>>a>>b;
r = sum(a,b);
cout<<r;

}

int sum(int x,int y) //function defination
{
    int s;
    s = x+y;
    return(s);
}


}
