#include <iostream>
#include <time.h>
#include <unistd.h>
#include <iomanip>

using namespace std;

class Clock
{
public:
    Clock()
    {
        time_t t = time(NULL);
        struct tm * pt = localtime(&t);
        _hour = pt->tm_hour;
        _min = pt->tm_min;
        _sec = pt->tm_sec;
    }
    void run()
    {
        while(1)
        {
            tick();
            display();
        }

    }

    void tick()
    {
        sleep(1);
        if (++_sec == 60)
        {
            _sec = 0;
            if (++_min == 60)
            {
                _min = 0;
                if(++_hour == 24)
                {
                    _hour = 0;
                }
            }
        }

    }
    void display()
    {
//        system("cls");   // for windows
        system("clear"); // for Linux/MACos
        cout<<setfill('0')<<setw(2)<<_hour<<":"<<setw(2)<<_min<<":"<<setw(2)<<_sec<<endl;
    }
private:
    int _hour;
    int _min;
    int _sec;
};

int main()
{
    Clock c;
    c.run();

    return 0;
}
