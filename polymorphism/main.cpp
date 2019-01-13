#include <iostream>
#include <typeinfo>

using namespace std;

//多态形成的条件：
//父类中有虚函数，加virtual， 声明关键字
//子类override覆写了父类的虚函数，子类中同名，同参，同返回，才能构成覆写
//通过父类的指针，通过父类指针，调用虚函数，形成多态

class Shape
{
public:
    Shape(int x = 0, int y = 0)
        :x_(x),y_(y)
    {
//        cout<<"Shape"<<endl;

    }

    virtual void draw()
    {
        cout<<"Shape"<<endl;
    }

protected:
    int x_;
    int y_;
};

class Circle:public Shape
{
public:
    Circle(int x = 0, int y = 0, int r = 0)
        :Shape(x,y),radius_(r)
    {

    }

    virtual void draw()
    {
        cout<<"draw circle"<<endl;
    }
protected:
    int radius_;
};

class Rect:public Shape
{
public:
    Rect(int x = 0, int y = 0, int w = 0, int l = 0)
        :Shape(x,y),width_(w),length_(l){}

    virtual void draw()
    {
        cout<<"draw rectangular"<<width_<<length_<<endl;
    }
protected:
    int width_;
    int length_;
};

int main()
{
    Circle c(3,4,5);
    Shape *ps = &c;
    ps->draw();

    Rect r(7,8,9,10);
    ps = &r;
    ps->draw();

//    Shape *ps;
//    while(1)
//    {
//        int choice;
//        case 1:
//            ps = &c;
//            break;
//        case 2:
//            ps = &r;
//            break;
//        default:
//            break;
//    }

    return 0;
}
