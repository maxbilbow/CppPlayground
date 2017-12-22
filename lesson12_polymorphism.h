//
// Created by bilbowm on 22/12/2017.
//

#ifndef CPPPLAYGROUND_LESSON12_POLYMORPHISM_H
#define CPPPLAYGROUND_LESSON12_POLYMORPHISM_H

//Employee is a class for calculating the
//pay for an hourly employee.
class Employee
{
private:
    float payRate = 0;
    std::string name = "";
    int employeeNumber = 0;
public:
    void setPayRate(float rateIn);

    float getPayRate();

    virtual float calcWeeklyPay();
};

//The class manager inherits from Employee
//The only difference... managers are salary
//employees. So the pay is calculated differently.
class Manager : public Employee
{
public:
    float calcWeeklyPay() override;
};



namespace lesson12_polymorphism {
    int issue1();
}
#endif //CPPPLAYGROUND_LESSON12_POLYMORPHISM_H
