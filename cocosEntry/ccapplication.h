#ifndef CCAPPLICATION_H
#define CCAPPLICATION_H
#include "ccapplicationprotocol.h"

class CCApplication:public CCApplicationProtocol
{
public:
    CCApplication();
    static CCApplication * sharedApplication();
    int run();

private:
    static CCApplication * sm_pSharedApplication;
};

#endif // CCAPPLICATION_H
