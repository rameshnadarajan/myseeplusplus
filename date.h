#include <iostream> 


class Date {
public:
        Date ( int aDay, int aMonth, int aYear)
        {
           day = aDay;
		   month = aMonth;
		   year = aYear;
        }
        void print(ostream& o) const
        {  o <<"date:"<< day << "/ "
             <<month << "/ " << year; }

private:
   int day;
   int month;
   int year;

};

//notice use of references -to be discussed later
ostream& operator<< (ostream& o, const Date &b)  //notice pass by reference
{
 b.print(o);
 o << "\n";
 return o;
} 