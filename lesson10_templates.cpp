//
// Created by bilbowm on 22/12/2017.
//

#include "lesson10_templates.h"
using namespace std;
const int SIZE=5;





template<class T>
class StudentRecord
{
private:
    const int size = SIZE;
    T grades[5];
    int studentId;
public:
    StudentRecord(T defaultVal)
    {
      for(int i=0; i<SIZE;++i)
        grades[i] = defaultVal;

    }
    void setGrades(T *input);

    void setId(int idIn);

    void printGrades();
};



template<class T>
void StudentRecord<T>::setGrades(T *input)
{
  for (int i = 0; i < SIZE; ++i)
  {
    grades[i] = input[i];
  }
}

template<class T>
void StudentRecord<T>::setId(int idIn)
{
  studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
  std::cout << "ID# " << studentId << ": \n ";
  for (int i = 0; i < SIZE; ++i)
    std::cout << grades[i] << "\n ";
  std::cout << "\n";
}


namespace lesson10_templates {
    void classIssues()
    {
      //StudentRecord is the generic class
      StudentRecord<int> srInt(0);
      srInt.setId(111111);
      int arrayInt[SIZE]={4,3,2,1,4};
      srInt.setGrades(arrayInt);
      srInt.printGrades();

      StudentRecord<char> srChar(' ');
      srChar.setId(222222);
      char arrayChar[SIZE]={'A','B','C','D','F'};
      srChar.setGrades(arrayChar);
      srChar.printGrades();

      StudentRecord<float> srFloat(0.0f);
      srFloat.setId(333333);
      float arrayFloat[SIZE]={2.75,4.0,3.7,2.8,3.99};
      srFloat.setGrades(arrayFloat);
      srFloat.printGrades();

      StudentRecord<string> srString("");
      srString.setId(4444);
      string arrayString[SIZE]={"B","B-","C+","B","A"};
      srString.setGrades(arrayString);
      srString.printGrades();
    }
}