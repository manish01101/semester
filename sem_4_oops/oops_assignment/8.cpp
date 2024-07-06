#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    int emp_code;
    string emp_name;
    int address;
    int ph_no;
    double basic_salary;

    Employee(int code, string name, int addr, int phone, double salary){
    	emp_code=code;
    	emp_name=name;
    	address=addr;
    	ph_no=phone;
    	basic_salary=salary;
	}

    void calculateSalary() {
        double da = 0.10 * basic_salary;
        double hra = 0.20 * basic_salary;
        double total_salary = basic_salary + da + hra;
        cout << "Total Salary: " << total_salary << endl;
    }

    void display() {
        cout << "Employee Code: " << emp_code << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << ph_no << endl;
        cout << "Basic Salary: " << basic_salary << endl;
    }
};

class Teaching : public Employee {
public:
    Teaching(int code, string name, int addr, int phone, double salary)
        : Employee(code, name, addr, phone, salary) {}
};

class Faculty : public Teaching {
public:
    Faculty(int code, string name, int addr, int phone, double salary)
        : Teaching(code, name, addr, phone, salary) {}
};

class Technical : public Teaching {
public:
    Technical(int code, string name, int addr, int phone, double salary)
        : Teaching(code, name, addr, phone, salary) {}
};

class Office : public Employee {
public:
    Office(int code, string name, int addr, int phone, double salary)
        : Employee(code, name, addr, phone, salary) {}
};

class Administration : public Office {
public:
    Administration(int code, string name, int addr, int phone, double salary)
        : Office(code, name, addr, phone, salary) {}
};

class Account : public Office {
public:
    Account(int code, string name, int addr, int phone, double salary)
        : Office(code, name, addr, phone, salary) {}
};

int main() {
    Faculty faculty1(1001, "John Doe", 123, 5551234, 50000.0);
    Technical tech1(2001, "Jane Smith", 456, 5555678, 45000.0);
    Administration admin1(3001, "Mark Brown", 789, 5559101, 60000.0);
    Account acc1(4001, "Lucy Gray", 101, 5551122, 55000.0);

    cout << "Faculty Details:" << endl;
    faculty1.display();
    faculty1.calculateSalary();

    cout << "\nTechnical Staff Details:" << endl;
    tech1.display();
    tech1.calculateSalary();

    cout << "\nAdministration Staff Details:" << endl;
    admin1.display();
    admin1.calculateSalary();

    cout << "\nAccount Staff Details:" << endl;
    acc1.display();
    acc1.calculateSalary();

    return 0;
};
