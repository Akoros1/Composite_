#ifndef UNSUPPORTEDOPERATIONEXCEPTION_H
#define UNSUPPORTEDOPERATIONEXCEPTION_H
#include <iostream>
#include <stdexcept>

class UnSupportedOperationException {
public:
       UnSupportedOperationException();
       virtual const char* what();
};

#endif // UNSUPPORTEDOPERATIONEXCEPTION_H
