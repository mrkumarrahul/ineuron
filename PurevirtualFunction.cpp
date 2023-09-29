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
    Shape * choice()
    {
        int c;
        cout<<"Enter your choice"<<endl;
        cout<<"Enter 1:Rectangle"<<endl;
        cout<<"Enter 2:Triangle"<<endl;
        cout<<"Enter 3:square"<<endl;
        cin>>c;
        if(c==1)
        {
            return new Rectangle;
        }
        else if(c==2)
        {
          return new Triangle;
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