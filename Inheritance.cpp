#include <iostream>
using std::string;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee: AbstractEmployee
{
    private:
    string Company;
    int Age;
    protected:
    string Name;
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
        std::cout << Name <<"Sorry No promotion for you!" << std::ends;
    }
};
class Developer: public Employee
{
    public:
    string FavProgrammingLanguage;
    Developer(string name,string company,int age,string favProgrammingLanguage): Employee(name,company,age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug()
    {
        std::cout << Name <<"fixed bug using" << FavProgrammingLanguage <<std::ends;
    }
};
class Teacher: Employee
{
    public:
    string Subject;
    void PrepareLesson()
    {
        std::cout << Name <<"is preparing" << Subject << "lesson" <<std::ends;
    }
    Teacher(string name,string company,int age,string subject):Employee(name,company,age)
    {
        Subject = subject;
    }
};
int main()
{
    Developer d = Developer("Bhabesh","Youtube",25,"C++");
    Teacher t = Teacher("Ritesh","Mother's Public School",35,"Physics");

    t.PrepareLesson();
}