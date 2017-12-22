//
// Created by bilbowm on 22/12/2017.
//

#ifndef CPPPLAYGROUND_LESSON10_TEMPLATES_H
#define CPPPLAYGROUND_LESSON10_TEMPLATES_H


#include <iostream>

namespace lesson10_templates {
    template <typename T>
    T functionName (...);

    template <typename T>
    T functionName (T  parameter1,T  parameter2,int param3,int p4,...)
    {

      std::cout << param3 <<" stuff";
    }

    void classIssues();
}
#endif //CPPPLAYGROUND_LESSON10_TEMPLATES_H
