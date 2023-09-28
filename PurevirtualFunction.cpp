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
class Triangle:public Shape
    {
        public:
        float area(float x,float y)
        {
              return 0.5*x*y;
        }
    };
    Shape * choice()
    {
        int c;
        cout<<"Enter your choice"<<endl;
        cout<<"Enter 1:Rectangle"<<endl;
        cout<<"Enter 2:Triangle"<<endl;
        cin>>c;
        if(c==1)
        {
            return new Rectangle;
        }
        else
        {
          return new Triangle;
        }    
        
    }    
int main()
{
    Shape *p;
    p=choice();
    cout<<"Area = "<<p->area(2,3)<<endl;
    return 0;
}