#include <iostream>

using namespace std;

class RenderShape
{
public:

    virtual void show() = 0;
    bool init(int x, int y)
    {
        x_ = x;
        y_ = y;
        return true;
    }

    static void RenderShapeList()
    {
        RenderShape *t = head;
        while(t)
        {
            t->show();
            t = t->next;
        }
    }

protected:
    int x_;
    int y_;
    static RenderShape * head;
    RenderShape * next;
};
RenderShape * RenderShape::head = nullptr;

class Rect:public RenderShape
{
public:
    static Rect * create(int x, int y, int w, int l)
    {
        Rect * pRet = new Rect;
        if (pRet && pRet->init(x, y, w, l))
        {
            pRet->autoRelease();
        }
        else {
            delete pRet;
            pRet = nullptr;
        }
    }

    bool init(int x, int y, int w, int l)
    {
        RenderShape::init(x,y);
        w_ = w;
        l_ = l;
        return true;
    }
    void autoRelease()
    {
        //        if(head == nullptr)
        //        {
        //           head = this;
        //           this->next = nullptr;
        //        }
        //        else {
        //            this->next = head;
        //            head = this;
        //        }
        this->next = head;
        head = this;

    }

    virtual void show()
    {
        cout<<"draw rect from "<<w_<<l_<<endl;
    }
protected:
    int w_;
    int l_;
};

class Circle:public RenderShape
{
public:

    static Circle * create(int x, int y, int r)
    {
        Circle * pCircle = new Circle;
        if (pCircle && pCircle->init(x, y, r))
        {
            pCircle->autoRelease();
        }
        else {
            delete pCircle;
            pCircle = nullptr;
        }
    }

    bool init(int x, int y, int r)
    {
        RenderShape::init(x,y);
        r_ = r;

        return true;
    }
    void autoRelease()
    {
        //        if(head == nullptr)
        //        {
        //           head = this;
        //           this->next = nullptr;
        //        }
        //        else {
        //            this->next = head;
        //            head = this;
        //        }
        this->next = head;
        head = this;

    }

    virtual void show()
    {
        cout<<"draw circle from "<<r_<<endl;
    }
protected:
    int r_;
};

//class Ellipse:public RenderShape
//{
//public:
//    virtual void show()
//    {
//        cout<<"draw ellipse from "<<l_<<s_<<endl;
//    }
//protected:
//    int l_;
//    int s_;
//};

int main()
{
    Rect *pr = Rect::create(1,2,3,4);
    Circle *pc = Circle::create(1,2,3);

    RenderShape::RenderShapeList();
    cout << "Hello World!" << endl;
    return 0;
}
