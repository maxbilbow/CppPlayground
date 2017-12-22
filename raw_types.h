//
// Created by bilbowm on 22/12/2017.
//

#ifndef CPPPLAYGROUND_RAW_TYPES_H
#define CPPPLAYGROUND_RAW_TYPES_H

template <typename T>
struct array {
private:
    int size;
    T * _array;
public:
    array(int sizeIn)
    {
      _array = new T[sizeIn];
      size = sizeIn;
    }

    ~array(){
      delete _array;
    }

    T &operator[](int index)
    {
      return _array[index];
    }

    int length()
    {
      return size;
    }
};

void arrayTest();
#endif //CPPPLAYGROUND_RAW_TYPES_H

