#include <iostream> 
#include <fstream> //allow writing to file instead of cout 
#include <cstring>

#include "date.h" 
#include "person.h" 
#include "student.h" 
#include "employee.h" 
#include "set.h"

using namespace std;

void main() {

ofstream file ("test_output.txt"); //file for  test results

file << "Program Output" << "\n"; //write title for test 
 

Person *p1 = new Person("Lou", "lou@chat.ca", 20, 6, 1960);

Set<Person> s,s2; 
Set<int> setints; 
Set<Dates> dates; 
 

s.add(*p1); 
if (p1 != &(s.someElement()) 
  cout << "OBJECTS ARE NOT THE SAME\n"; //should not happen

s.add(*p1); //attempt to add a duplicate
s.add(*(new Person("Frank", "f123@chat.ca", 20, 3, 1967))); 
s.add(*(new Student("Eric", "frank@chat.ca", Date(25, 4, 1958), "Carleton", 12345 ))); 
s.add(*(new Student("Mary", "mary@chat.ca", Date(25, 4, 1955), "Carleton", 22234 ))); 
s.add(*(new Employee("John", "johnchat.ca", Date(12, 12, 1970) "Nortel", 99912 )));

int a = 5;
int b= 12;
int c= 12;
int d= 42;

 setints.add(a).add(b).add(c).add(d).add(a); //note attempt to add a duplicate
file << setints; //print the ints

file << "Printing the Set<int> \n"; //write comment to output file 
file << setints; //print the ints to file

dates.add(*(new Date(1,1,2001)).add(*(new Date(15,12,2001))).add(*(new Date(29,7,2001))); 
file << dates; //print the dates to console

file << "Printing the Set<Date> \n"; //write comment to output file 
file << dates; //print the dates to the output file

//print the names using the iterator.

for (s.reset(); s.hasMore(); s.advance() ) 
       file << s.element().getName() << "  ";

//add some more people 
s.add(*(new Person("Alan", "alan@chat.ca", 20, 3, 1967))); 
s.add(*(new Person("Eric", "frank@chat.ca", 25, 4, 1958))); 
s.add(*(new Person("Bruce", "bruce@chat.ca", 25, 4, 1955))); 
 

//print out the three sets 
file << s << "\n" << s2 << "\n" << s3 << "\n";

//Delete all the heap objects (they should all be in set s and dates 
for (s.reset(); s.hasMore(); s.advance() ) 
        delete &(s.element());

for (dates.reset(); dates.hasMore(); dates.advance() ) 
        delete &(dates.element());

file.close(); //close output file 
} //end main 