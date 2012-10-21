 
class Person { 
public: 
     Person(const char * their_name, const char * email, int day, int month, int year) 
     Person(const char * their_name, const char * email, const Date & d)
     ~Person() {...}
     Person & operator=(const Person & p) {...} 
     const char * getName()const 
     const char * getEmailAddress()const 
     void setEmailAddress(const char * email_address); 
     Date getBirthDate()const; 
     virtual void printOn(ostream & o) const { /*print person on output stream o*/ } 
private: 
     char * name; 
     char * email_address; 
     Date birthday; 
};

//you will need the following global operator to print Persons. 
//Put this in the same file as class Person, but not inside the Person class.

ostream & operator<<(ostream & ostr, const Person & p) { 
     p.printOn(ostr); 
     return ostr; 
} 