class Student : public Person { 
public: 
     Student(const char * their_name, const char * email, const Date & d, const char * sch, int stdnum); 
     const char * getSchool()const; 
     int getStudentNumber()const; 
     void setSchool(const char * theSchool); 
     void printOn(ostream & o) const { 
       o << "Student #" << studentNumber << " "; 
       Person::printOn(o); 
     }

private: 
     char * school; 
     const int studentNumber; 
};