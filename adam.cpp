#include <iostream>

class Employee{
    private:
    std::string EmployeeName;
    int age;
    std::string department;
    int basicSalary;
    int cnicNo;
    int incomeTax;

    public:

    //Set Functions
    void setName(std::string EmpName)
    {
        EmployeeName = EmpName;
    }
    void setAge(int EmpAge)
    {
        age = EmpAge;
    }
    void setDept(std::string dept)
    {
        department = dept;
    }
    void setCnic(int empCnic)
    {
        cnicNo = empCnic;
    }
    void setSalary(int EmpSalary)
    {
        basicSalary = EmpSalary;
    }
    void setTax(int EmpTax)
    {
        incomeTax = EmpTax;
    }

    //Get Functions
    std::string getName() const{
        return EmployeeName;
    }
    int getAge() const{
        return age;
    }
    std::string getDepartment() const{
        return department;
    }
    int getSalary() const{
        return basicSalary;
    }
    int getCnic() const{
        return cnicNo;
    }
    int getTax() const{
        return incomeTax;
    }

    //Helping Functions
    void InputOfData();
    void OutputOfData();
};

void Employee::InputOfData(){
    std::string EmpName;
    int ageEmp;
    std::string departmentEmp;
    int basicSalaryEmp;
    int incomeTaxEmp;
    int cnicEmp;

    std::cout << "Enter Employee Name : ";
    std::cin >> EmpName;
    setName(EmpName);
    std::cout << "Enter Employee Age : ";
    std::cin >> ageEmp;
    setAge(ageEmp);
    std::cout << "Enter Employee Department : ";
    std::cin >> departmentEmp;
    setDept(departmentEmp);
    std::cout << "Enter CNIC Number : ";
    std::cin >> cnicEmp;
    setCnic(cnicEmp);
    std::cout << "Enter Employee Salary : ";
    std::cin >> basicSalaryEmp;
    setSalary(basicSalaryEmp);
    std::cout << "Enter Employee Tax : ";
    std::cin >> incomeTaxEmp;
    setTax(incomeTaxEmp);
}

void Employee::OutputOfData(){
    std::cout << "Name : " << getName() << std::endl;
    std::cout << "Age : " << getAge() << std::endl;
    std::cout << "Department : " << getDepartment() << std::endl;
    std::cout << "Salary : " << getSalary() << std::endl;
    std::cout << "Tax : " << getTax() << std::endl;
}

// void Employee::Search()
// {
//     int tempCnic;
//     int tempIndex;
//     std::cout << "Please Enter Cnic to search : ";
//     std::cin >> tempCnic;

//     for (int i = 0; i < 3; i++)
//     {
//         if(tempCnic == cnicNo)
//         {
//             tempIndex = i;
//             break;
//         }
//     }
//     OutputOfData();
//}

int main()
{
    int index = 0;
    Employee emp[3];
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Enter Data of Employee " << i << " : \n";
        emp[i].InputOfData();
    }
    
    int menuChoice;
    bool isRunning = true;

    while (isRunning)
    {
        menu:
        std::cout << "1. Show Detail of all Employees\n";
        std::cout << "2. Search an Employee\n";
        std::cout << "3. Print Total Salary\n";
        std::cout << "4. To Exit\n";
        std::cout << "---------------------\n";
        std::cout << "Enter your Choice : ";
        std::cin >> menuChoice;

        if(menuChoice == 1)
        {
            system("cls");
            for (int i = 0; i < 3; i++)
            {
                emp[i].OutputOfData();
                std::cout << "-------------" << std::endl;
            }
            goto menu;
        }
        else if(menuChoice == 2)
        {
            int tempCnic;
            
            std::cout << "Enter Cnic No. : ";
            std::cin >> tempCnic;

            for (int i = 0; i < 3; i++)
            {
                if(emp[i].getCnic() == tempCnic)
                {
                    index = i;
                }
            }
            emp[index].OutputOfData();
            goto menu;
        }
        else if(menuChoice == 3)
        {
            int tempCnic;
            int index = 0;
            int salary;
            std::cout << "Enter Cnic No. : ";
            std::cin >> tempCnic;

            for (int i = 0; i < 3; i++)
            {
                if(emp[i].getCnic() == tempCnic)
                {
                    index = i;
                    break;
                }
            }
            salary = emp[index].getSalary() - emp[index].getTax();
            std::cout << "Salary = " << salary << std::endl;
            goto menu;
        }
        else if (menuChoice == 4)
        {
            std::cout << "Closing the Program\n";
            isRunning = false;
        }
    }
    
}