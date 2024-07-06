#include<iostream>
using namespace std;

class University{
	protected:
	 string university_name;
	 string department_assigned;
	 string person_assigned;
	
	public: 
	void setItem(){
		cout<<"Enter name of university: \n";
		cin>>university_name;
			
		cout<<"Enter department\n";
		cin>>department_assigned;
		
		cout<<"Enter name of person project is assigned to\n";
		cin>>person_assigned;		
	}
	
	void display(){
		cout<<"University: "<<university_name;
		cout<<endl<<"Department: "<<department_assigned;
		cout<<endl<<"In charge: "<<person_assigned<<endl;
	}
};

class Company{
	protected:
		string company_name;
		int nos_of_engineer;
		double amount_invested;
	
	public:	
	void setItem(){
		cout<<"Enter name of company: \n";
		cin>>company_name;
		
		cout<<"Enter number of engineers \n";
		cin>>nos_of_engineer;
		
		cout<<"Enter amount invested: \n";
		cin>>amount_invested;
	}
	
	void display(){
		cout<<"Company: "<<company_name;
		cout<<endl<<"Number of engineers: "<<nos_of_engineer;
		cout<<endl<<"Investment: "<<amount_invested<<endl;
	}
};

class Project:public University, public Company{
	protected:
		string project_type;
		int project_duration;
		int granted_amount;
	
	public:
		void setItem(){
			cout<<"Enter type of project: \n";
			cin>>project_type;
			
			cout<<"Enter duration of project: \n";
			cin>>project_duration;
			
			cout<<"Enter amount granted after completion of project: \n";
			cin>>granted_amount;
		}
		
		void display(){
			cout<<"type of project: "<<project_type;
			cout<<"duration of project: "<<project_duration<<endl;
		}
};

int main(){
	University unidata;
	Company compdata;
	Project prodata;
	
	cout << "University Details:" << endl;
    unidata.setItem();
    unidata.display();
    
    cout << "Company Details:" << endl;
    compdata.setItem();
    compdata.display();
    
    cout<<"Project Details:"<<endl;
    prodata.setItem();
    prodata.display();
    
    return 0;
}
