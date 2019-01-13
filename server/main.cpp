#include <iostream>

using namespace std;

class Server
{
public:
    Server(char n):serverName_(n){}

    void serveOne()
    {
        if(openFlag_ && lastServeIdx_ < turnCount_)
        {
            lastServeIdx_++;

            cout<<"Server "<<serverName_<<"serve for "<<lastServeIdx_<<endl;
        }
        if (lastServeIdx_ >= turnCount_)
            openFlag_ = false;
    }

    static int stillOpen()
    {
        return openFlag_;
    }
    static int & getTurn()
    {
        return turnCount_;
    }
private:
    char serverName_;
    static int turnCount_;
    static bool openFlag_;
    static int lastServeIdx_;
};
int Server::turnCount_ = 0;
bool Server::openFlag_ = true;
int Server::lastServeIdx_ = 0;
int main()
{
    Server a('A'),b('B');

    cout<<"how many people int group:";
    int num;
    cin>>num;

    for(int i=0;i<num;++i)
    {
        cout<<"idx:"<<++Server::getTurn()<<endl;
    }

    do
    {
        a.serveOne();
        b.serveOne();
    }while(Server::stillOpen());

    return 0;
}
