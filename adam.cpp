#include <iostream>

class Employee{
    private:
    std::string *EmployeeName = new std::string[3];
    int *age = new int[3];
    std::string *department = new std::string[3];
    int *basicSalary = new int[3];
    int *incomeTax = new int[3];

    public:

    //Set Functions
    void setName(std::string *EmpName, int index)
    {
        *(EmployeeName + index) = *(EmpName + index);
    }
    void setAge(int *EmpAge, int index)
    {
        *(age + index) = *(EmpAge + index);
    }
    void setDept(std::string *dept, int index)
    {
        *(department + index) = *(dept + index);
    }
    void setSalary(int *EmpSalary, int index)
    {
        *(basicSalary + index) = *(EmpSalary +index);
    }
    void setTax(int *EmpTax, int index)
    {
        *(incomeTax + index) = *(EmpTax + index);
    }

    //Get Functions
    std::string getName(int index) const{
        return *(EmployeeName + index);
    }
    int getAge(int index) const{
        return *(age + index);
    }
    std::string getDepartment(int index) const{
        return *(department + index);
    }
    int getSalary(int index) const{
        return *(basicSalary + index);
    }
    int getTax(int index) const{
        return *(incomeTax + index);
    }

    //Helping Functions
    void InputOfData();
    void OutputOfData();
    void Search();
    void salarySearch();
};

void Employee::InputOfData(){
    std::string EmpName;
    int ageEmp;
    std::string departmentEmp;
    int basicSalaryEmp;
    int incomeTaxEmp;

    int index = 0;
    std::cout << "Enter Employee Name : ";
    std::cin >> EmpName;
    setName(&EmpName, index);
    std::cout << "Enter Employee Age : ";
    std::cin >> ageEmp;
    setAge(&ageEmp, index);
    std::cout << "Enter Employee Department : ";
    std::cin >> departmentEmp;
    setDept(&departmentEmp, index);
    std::cout << "Enter Employee Salary : ";
    std::cin >> basicSalaryEmp;
    setSalary(&basicSalaryEmp, index);
    std::cout << "Enter Employee Tax : ";
    std::cin >> incomeTaxEmp;
    setTax(&incomeTaxEmp, index);
    index++;
}

void Employee::OutputOfData(){
    int index = 0;
    std::cout << "Name : " << getName(index) << std::endl;
    std::cout << "Age : " << getAge(index) << std::endl;
    std::cout << "Department : " << getDepartment(index) << std::endl;
    std::cout << "Salary : " << getSalary(index) << std::endl;
    std::cout << "Tax : " << getTax(index) << std::endl;
}

int main()
{
    Employee emp;
    emp.InputOfData();
    emp.OutputOfData();
}