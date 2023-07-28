#include<bits/stdc++.h>
using namespace std;
class Shape{
    protected:
    int height,width;
    public:
    Shape(int a = 0,int b = 0){
        width = a;
        height = b;
    }
    virtual int area(){
        cout<<"Parent class area : "<<width*height<<endl;
        return width*height;
    }
};
class Rectangle : public Shape {
    public:
    Rectangle(int a = 0, int b = 0):Shape(a,b) { }
    int area(){
        cout<<"Rectangle Ares is : "<<width*height<<endl;
        return width*height;
    }
};
class Triangle : public Shape{
    public: 
    Triangle(int a = 0, int b = 0):Shape(a,b){}
    int area(){
        cout<<"Triangle area is : "<<(width*height)/2<<endl;
        return width*height;
    }
};

int main(){
    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10,7);

    shape = &rec;
    shape->area();

    shape = &tri;
    shape->area();
    return 0;
}