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
    class square:public Shape
    {
      public:
      float area(float x,float y)
      {
        return x*y;
      }
    };
    class circle:public Shape{
        public:
        float area(float x,float y)
        {
            return 3.14*x*y;
        }
    };
    class Rhombus:public Shape{
        public:
        float area(float x,float y)
        {
            return x*y;
        }
    };
    class cylinder:public Shape{
        public:
        float area(float x,float y)
        {
            return 3.17*x*y*y;
        }
    };
    Shape * choice()
    {
        int c;
        cout<<"Enter your choice"<<endl;
        cout<<"Enter 1:Rectangle"<<endl;
        cout<<"Enter 2:Triangle"<<endl;
        cout<<"Enter 3:circle" <<endl;
        cout<<"Enter 4:Rhombus"<<endl;
        cout<<"Enter 5:cylinder"<<endl;
        cout<<"Enter 6:square"<<endl;
        cin>>c;
        if(c==1)
        {
            return new Rectangle;
        }
        else if(c==2)
        {
          return new Triangle;
        }  
        else if(c==3)
        {
            return new circle;
        }
        else if(c==4)
        {
            return new Rhombus;
        }
        else if(c==5)
        {
            return new cylinder;
        }
        else
        {
            return new square;
        }
        
    }    
int main()
{
    Shape *p;
    p=choice();
    cout<<"Area = "<<p->area(3,3)<<endl;
    return 0;
}