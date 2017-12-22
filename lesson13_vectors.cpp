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

    int main ()
    {
      changeSize();
      assign();
      pushBack();
      insert();
    }


}