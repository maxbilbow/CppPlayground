//
// Created by bilbowm on 22/12/2017.
//

#include "raw_types.h"

#include <iostream>


void arrayTest()
{
  {
    array<int> array(10);
    for (int i = 0; i < array.length(); ++i)
      std::cout << array[i] << ",";

    std::cout << '\n';

    for (int i = 0; i < array.length(); ++i)
      array[i] = i;

    for (int i = 0; i < array.length(); ++i)
      std::cout << array[i] << ",";
    std::cout << '\n';

  }
  {
    array<char> array(10);
    for (int i = 0; i < array.length(); ++i)
      std::cout << array[i] << ",";

    std::cout << '\n';

    for (int i = 0; i < array.length(); ++i)
      array[i] =  '0' + i;

    for (int i = 0; i < array.length(); ++i)
      std::cout << array[i] << ",";
    std::cout << '\n';
  }
}
