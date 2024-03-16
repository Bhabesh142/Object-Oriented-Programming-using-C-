#include <iostream>
using std::string;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee: AbstractEmployee
{
    private:
    string Name;
    string Company;
    int Age;
    public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if(age>=18)
        Age = age;       
    }
    int getAge()
    {
        return Age;
    }
    void IntroduceYourself()
    {
        std::cout <<"Name:- " << Name << std::ends;
        std::cout <<"Company:- " << Company << std::ends;
        std::cout <<"Age:- " << Age << std::ends; 
    }
    Employee(string name,string company,int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    {
        if(Age>30)
        std::cout << Name <<"got promoted !" << std::ends;
        else
        std::cout << Name <<"Sorry No promotion for you.!" << std::ends;
    }
};
int main()
{
    Employee employee1 = Employee("Bhabesh","Microsoft",25);
    Employee employee2 = Employee("Ritesh","IBM",35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}