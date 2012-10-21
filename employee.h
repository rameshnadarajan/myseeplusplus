class Employee : public Person { 
public: 
     Employee(const char * their_name, const char * email, const Date & d, const char * cpy, int empnum); 
     const char * getCompany()const; 
     int getEmployeeNumber()const; 
     void setCompany(const char * theCompany); 
     void printOn(ostream & o) const { 
       o << "Employee #" << employeeNumber << " "; 
       Person::printOn(o); 
     }

private: 
     char * company; 
     const int employeeNumber; 
}; 