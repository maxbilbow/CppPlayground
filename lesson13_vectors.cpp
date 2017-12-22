//
// Created by bilbowm on 22/12/2017.
//

#include "lesson13_vectors.h"
#include <iostream>
#include <vector>
namespace lesson13_vectors {


    void changeSize()
    {
      std::vector<float> vFloat;
      std::cout<<"vectorInts has "<<vFloat.size()<<" elements\n";

      //Changing the size of vectorInts to 6
      vFloat.resize(6);
      std::cout<<"\n\nvectorInts now has "<<vFloat.size()<<" elements\n";

    }

    void assign()
    {
      //TODO: create a vector of floats
      std::vector<float> vFloat;

      std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";

      //TODO: add elements to the library

      std::cout<<"\n\nAdding 10 elements to the vector\n";

      //TODO: assign the value 8.8 to 10 elements of the vector
      vFloat.assign(10, 8.8);
      std::cout<<"vFloat has "<<vFloat.size()<<" elements\n";

      //printing the contents of vectorInts
      std::cout<<"VectorInts has these elements:\n";
      std::vector<float>::iterator it;
      for (it = vFloat.begin(); it != vFloat.end(); ++it)
        std::cout<<*it<<" ";
    }


    void pushBack()
    {
      //creating a vector of integers
      std::vector<int> vectorInts;
      //creating an iterator for the vector
      std::vector<int>::iterator it;

      std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

      std::cout<<"Adding 23 to the vector\n";
      vectorInts.assign(1,23);
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";


      std::cout<<"\n\nAdding four elements to the vector\n";
      //assigning the value 3 to 4 elements of the vector
      vectorInts.push_back(24);
      vectorInts.push_back(25);
      vectorInts.push_back(26);
      vectorInts.push_back(27);
      std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

      //printing the contents of vectorInts
      std::cout<<"VectorInts has these elements:\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";
    }

    void insert()
    {
      //creating a vector of integers
      std::vector<int> vectorInts;
      //creating an iterator for the vector
      std::vector<int>::iterator it;

      vectorInts.push_back(0);
      vectorInts.push_back(1);
      vectorInts.push_back(2);
      vectorInts.push_back(3);
      vectorInts.push_back(4);
      vectorInts.push_back(5);
      vectorInts.push_back(6);
      vectorInts.push_back(7);

      std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

      //printing the contents of vectorInts
      std::cout<<"VectorInts has these elements:\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

      //insert an element after the first element
      it  = vectorInts.begin() + 1;
      vectorInts.insert(it, -1);
      std::cout<<"\n\nAfter the insert\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

      //insert an element after the third element
      it  = vectorInts.begin();
      vectorInts.insert(it + 3, -2);
      std::cout<<"\n\nAfter the insert\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

      //insert an element after the third element
      it  = vectorInts.begin();
      vectorInts.insert(it + 5, -3);
      std::cout<<"\n\nAfter the insert\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

    }

    void emplace()
    {
//creating a vector of integers
      std::vector<int> vectorInts;
      //creating an iterator for the vector
      std::vector<int>::iterator it;

      vectorInts.push_back(0);
      vectorInts.push_back(1);
      vectorInts.push_back(2);
      vectorInts.push_back(3);
      vectorInts.push_back(4);
      vectorInts.push_back(5);
      vectorInts.push_back(6);
      vectorInts.push_back(7);

      std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

      //printing the contents of vectorInts
      std::cout<<"VectorInts has these elements:\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

      //insert an element after the first element
      it  = vectorInts.begin() + 1;
      vectorInts.emplace(it, -1);
      std::cout<<"\n\nAfter the emplace(it, -1)\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

      //insert an element after the third element
      it  = vectorInts.begin();
      vectorInts.emplace(it + 3, -2);
      std::cout<<"\n\nAfter the emplace(it + 3, -2)\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

      //insert an element after the third element
      it  = vectorInts.begin();
      vectorInts.emplace(it + 5, -3);
      std::cout<<"\n\nAfter the emplace(it + 5, -3)\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";


    }

    void emplace2()
    {
      struct Foo
      {
          int n, x;
          Foo(int nIn, double xIn)
          {
            n = nIn; x = static_cast<int>(xIn);
          }
      };

      std::vector<Foo> v;
      v.emplace(v.begin()+1, 42, 3);
      v.insert(v.begin()+1, Foo(42, 3));
    }
    using namespace std;
    void printVector(vector<int> vIn);
    void assignFunction(vector<int> vInts, int in);
    void pushBackFunction(vector<int> vInts, int in);
    void emplaceFunction(vector<int> vInts, int loc, int in);

    void clear()
    {
      //creating a vector of integers
      std::vector<int> vectorInts;
      //creating an iterator for the vector
      std::vector<int>::iterator it;

      vectorInts.push_back(0);
      vectorInts.push_back(1);
      vectorInts.push_back(2);
      vectorInts.push_back(3);
      vectorInts.push_back(4);
      vectorInts.push_back(5);
      vectorInts.push_back(6);
      vectorInts.push_back(7);

      std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

      //printing the contents of vectorInts
      std::cout<<"VectorInts has these elements:\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

      //clear the vector
      vectorInts.clear();
      std::cout<<"\nAfter clear, the vector has these elements:\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

    }

    void erase()
    {
      //creating a vector of integers
      std::vector<int> vectorInts;
      //creating an iterator for the vector
      std::vector<int>::iterator it;

      vectorInts.push_back(0);
      vectorInts.push_back(1);
      vectorInts.push_back(2);
      vectorInts.push_back(3);
      vectorInts.push_back(4);
      vectorInts.push_back(5);
      vectorInts.push_back(6);
      vectorInts.push_back(7);

      std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

      //printing the contents of vectorInts
      std::cout<<"VectorInts has these elements:\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

      //clear the vector
      vectorInts.erase(vectorInts.begin()+4);
      std::cout<<"\nAfter erase, the vector has these elements:\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";
    }

    void popBack()
    {
      //creating a vector of integers
      std::vector<int> vectorInts;
      //creating an iterator for the vector
      std::vector<int>::iterator it;

      vectorInts.push_back(0);
      vectorInts.push_back(1);
      vectorInts.push_back(2);
      vectorInts.push_back(3);
      vectorInts.push_back(4);
      vectorInts.push_back(5);
      vectorInts.push_back(6);
      vectorInts.push_back(7);

      std::cout<<"vectorInts has "<<vectorInts.size()<<" elements\n";

      //printing the contents of vectorInts
      std::cout<<"VectorInts has these elements:\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

      //pop the last element off the vector
      vectorInts.pop_back();
      std::cout<<"\n\nAfter pop_back(), the vector has these elements:\n";
      for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout<<*it<<" ";

      //pop_back does not return the element that was removed.
      //For example, the line of code below will return an error.
      int a;
      //a = vectorInts.pop_back(); //this line does not compile
    }
    int main ()
    {
      changeSize();
      assign();
      pushBack();
      insert();
      emplace();
      clear();
      erase();
      popBack();
    }


    void printVector(vector<int> vIn)
    {//printing the contents of vIns
      vector<int>::iterator it;

      for (it = vIn.begin(); it != vIn.end(); ++it)
        std::cout<<*it<<" ";
    }

    void assignFunction(vector<int> vInts, int in)
    {
      cout<<"\nassigning "<<in<<" and printing the vector\n";
      vInts.assign(1, in);
      printVector(vInts);
    }
    void pushBackFunction(vector<int> vInts, int in)
    {
      cout<<"\npush back "<<in<<" and printing the vector\n";
      vInts.push_back(in);
      printVector(vInts);
    }
    void emplaceFunction(vector<int> vInts,  int loc, int in)
    {
      vector<int>::iterator it;
      cout<<"\nemplacing "<<in<<" and printing the vector\n";
      it  = vInts.begin() + loc;
      vInts.emplace(it, in);
      printVector(vInts);
    }
}