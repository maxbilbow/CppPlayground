//
// Created by bilbowm on 21/12/2017.
//

#include "lesson6_arrays.h"
#include <iostream>

void findMinMax()
{
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;

    //get the numbers from the user
    for(int i = 0; i < 15; i++)
    {
        std::cout << "Enter a number: ";
        std::cin>>userInput;
        std::cout << userInput << "\n";
        if(userInput > maxNumber)
        {
            maxNumber = userInput;
        }
        if(userInput < minNumber)
        {
            minNumber = userInput;
        }
        sumTotal = sumTotal + userInput;
    }
    std::cout << "Maximum number = " << maxNumber << "\n";
    std::cout << "Minimum number = " << minNumber << "\n";
    average = sumTotal / 15.0;
    std::cout << "Average = " << average << "\n";
}


void sortStuff()
{
    int stuff[] = {43, 32, 21, 23, 43, 98, 90, 65, 53, 42, 69, 79, 82, 7, 1, 63, 64, 90, 87, 96, 4, 55, 3, 7, 2, 1, 67,
                   89, 543, 567, 985, 34, 975, 890, 4567, 23, 33, 9, 56, 345, 9865};

    //sorting the array
    for(int i = 0; i < 40; i++)
    {
        for (int j = 0; j < 39 - i; j++)
        {
            if (stuff[j] > stuff[j + 1])
            {
                int temp;
                temp = stuff[j];
                stuff[j] = stuff[j + 1];
                stuff[j + 1] = temp;
            }
        }
    }

    std::cout<<"\n\nThe array sorted\n";
    for(int i = 0; i< 40; i++)
    {
        std::cout << stuff[i] <<" ";
    }
}

int indexOf(int value, int searchArray[], int arraySize)
{
//    int searchArray[10] = {324,4567,6789,5421345,7,65,8965,12,342,485};
    for (int i=0; i<arraySize; ++i)
        if (searchArray[i] == value)
            return i;

    return -1;
}


void arrayMatrixCrossProduct()
{
    //array dimensions must be known at compile time
    //so I used const int to set the row and col numbers
    const int row = 4;
    const int col = 4;

    int arr[row][col];
    int vector[row], product[row];
    int sum;

    //get the values for the array from the user
    for(int i=0;i<row;i++)
        for(int j=0;j<row;j++)
        {
            std::cout<<"arr["<<i<<"]["<<j<<"] = \n";
            std::cin>>arr[i][j];
            //std::cout<<"arr["<<i<<"]["<<j<<"] ="<<arr[i][j]<<"\n";
        }

    //getting the values for the vector from the user
    for(int i=0; i<row; i++)
    {
        std::cout<<"vector["<<i<<"] = \n";
        std::cin>>vector[i];
        //std::cout<<"vector["<<i<<"] = "<<vector[i]<<"\n";
    }
    sum = 0;

    for(int i=0;i<row;i++)
    {
        for(int j=0; j<row;j++)
        {
            sum = (arr[i][j] * vector[i]) + sum;
        }
        product[i] = sum;
        sum=0;
    }

    for(int i=0;i<row;i++)
    {
        std::cout<<"product["<<i<<"] = "<<product[i]<<"\n";
    }
}

