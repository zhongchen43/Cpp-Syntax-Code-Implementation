#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;

namespace  namea {
    int a = 10;
}
namespace namea {

    int b = 30;

}

int main()
{
//    using namespace namea;
    cout << "Hello World!" << endl;

    using namespace aa;
    using namespace CC;

    a n;
    B b;
    return 0;
}
