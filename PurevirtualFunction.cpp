#include<stdio.h>
#include<iostream>
using namespace std;
class Shape//abstract class
{
    public:
    virtual float area(float x,float y)=0;//pure abstract function
    void display()
    {
        cout<<"Welcome"<<endl;
    }
};
class Rectangle:public Shape
    {
         public:
         float area(float x,float y)
         {
            return (x*y);
         }
    };
class triangle:public Shape
    {
        public:
        float area(float x,float y)
        {
              return 0.5*x*y;
        }
    };    
int main()
{
    Shape *p;
    p=new Rectangle;
    cout<<"Area = "<<p->area(2,3)<<endl;
    return 0;
}