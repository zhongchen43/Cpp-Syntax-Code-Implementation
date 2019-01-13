#include <iostream>
#include "animal.h"
#include "dog.h"
#include "cat.h"

using namespace std;

int main()
{
    Cat c;
    Dog d;
    Animal *pa = &c;
    pa->voice();

    return 0;
}

