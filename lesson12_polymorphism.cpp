//
// Created by bilbowm on 22/12/2017.
//
#include<iostream>
#include<string>
#include "lesson12_polymorphism.h"


void Employee::setPayRate(float rateIn)
{
  payRate = rateIn;
}

float Employee::getPayRate()
{
  return payRate;
}

float Employee::calcWeeklyPay()
{
  return 40 * payRate;
}

float Manager::calcWeeklyPay()
{
  //weekly pay is based on the yearly salary
  //divided by 52 weeks
  return Employee::getPayRate() /52;
}

int lesson12_polymorphism::issue1()
{
  using namespace std;
  const string status = "salary"; //options: hourly or salary
  string level;

  //assign an manager to e1
  level = "salary";
  Employee *e1; //e1 is now a pointer to Employee object

  if(status != level)
  {
    e1 = new Employee(); //we define an hourly employee
  }
  else
  {
    e1 = new Manager(); //we define a salaried employee
  }

  e1->setPayRate(12000.00);

  cout<<"e1 pay: $"<<e1->calcWeeklyPay();

  //assign an employee to e2
  level = "hourly";
  Employee *e2; //e1 is now a pointer to Employee object

  if(status != level)
  {
    e2 = new Employee(); //we define an hourly employee
  }
  else
  {
    e2 = new Manager(); //we define a salaried employee
  }

  e2->setPayRate(10.00);
  cout<<"\ne2 pay: $"<<e2->calcWeeklyPay();

  return 0;
}