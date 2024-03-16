#include <iostream>
using std::string;

class Employee
{
    public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself()
    {
        std::cout <<"Name:- " << Name << std::ends;
        std::cout <<" ";
        std::cout <<"Company:- " << Company << std::ends;
        std::cout <<" ";
        std::cout <<"Age:- " << Age << std::ends;
        std::cout <<"\n";
    }
};
int main()
{
    Employee employee1;
    employee1.Name = "Bhabesh";
    employee1.Company = "Microsoft";
    employee1.Age = 25;
    employee1.IntroduceYourself();
    employee1.Name = "Bhabesh";
    employee1.Company = "Microsoft";
    employee1.Age = 25;
    employee1.IntroduceYourself();
    employee1.Name = "Bhabesh";
    employee1.Company = "Microsoft";
    employee1.Age = 25;
    employee1.IntroduceYourself();
    employee1.Name = "Bhabesh";
    employee1.Company = "Microsoft";
    employee1.Age = 25;
    employee1.IntroduceYourself();
    employee1.Name = "Bhabesh";
    employee1.Company = "Microsoft";
    employee1.Age = 25;
    employee1.IntroduceYourself();
}