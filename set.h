template <class T> 
class Set { 
public: 
Set(int initial_size = 4); //default constructor, allocates appropriate heap storage 
Set(const Set<T> & s); //copy constructor 
~Set(void); //destructor 
Set<T> & operator=(const Set<T> & s); //assignment operator 
Set<T> & add(T & element) //store element unless it is a duplicate of existing element. 
Set<T> & remove(const T & element) // remove object equal to element if it  exists 
bool includes(const T & element) const 
    // answer whether element is in the set 
T & someElement() const //answer some (any) element  of the set but don't remove it 
//Iterator Methods 
void reset() const {...} 
bool hasMore() const {...} 
void advance() const {...} 
T & element()const {...}

int size()const //answer the number of elements in the set. 
void printOn(ostream & ostr) //print the elements of the set

private: 
T ** elements;  //to store elements (like assignment #1) 
int numberOfElements; //number of elements in the set 
int capacity; //max. no of elements the set can current memory can hold
mutable int index; //private variable used for the iteration
};

//you will need the following global operator to print Sets. 
//Put this in the same file as class Set, but not inside the Set class. 
ostream & operator<<(ostream & ostr, const Set<T> & s) { 
     s.printOn(ostr); 
     return ostr; 
} 