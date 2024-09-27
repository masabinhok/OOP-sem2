# Object Oriented Programming

Just another way to write code, real life representation will be easier, promoting code reusability.

## Classes and Objects

Objects are entities in the real world having certain behaviours and functionalities.
Classes are the blueprints for objects, which define how its objects would be.

Example:
Teacher is a real life entity having props like name, department, subject, salary... and functionalities/methods like changeDept(), calcSalaryTax()...
So to store data for teachers having same props and methods, we can design a class for teacher with a blueprint having those props and methods, and then make each teacher a instance of the class. i.e objects...

## Access Modifiers

Private: data & methods accessible inside class
Public: data & methods accessible to everyone
Protected: data & methods accessible inside class and to its derived class.

By default: everything in cpp is private.

## Encapsulation

Encapsulation is wrapping up of data & member functions in a single unit called class. Its simply the concept of class and objects.
-helps in data hiding. (using access modifiers: private)

## Constructor

Special method, which gets invoked automatically when any instance of class is created. Used for initialization.

-Same name as class
-Constructor doesn't have any return type
-Construction is only called once at the time of obj creation
-Construction is allways declared public;
-Constructor call vayesiii, Memory allocate hunxa.

### Types of constructor

-non parameterized constructor : parameter navayekooo.
-parameterized constructor: parameter vayeko

** Constructor can be of same name, but the number of parameters should be different, this phenomenon in programming is known as constructor overloading which is an example of operator overloading. Compiler automatically recognizes which Constructor to call with its call. **

\*\*
this is a special pointer that points to the current object.

this->prop which is another way of writing (\*this).prop...

- is a deferencing operator which extracts the value from the given address.

if int* ptr = &x;
cout << ptr <<endl; address store garya hunxa...
cout << *ptr <<endl; // value store garya hunxa.. this is the concept of pointer...

-copy constructor
It simply copies one object into another..
to invoke this,
we may class_name new_obj(old_obj);
now it will invoke the default copy constructor is custom is not present.
where the new_obj will have the exact copy of the old_obj at that instance. Later is we change the props of the old_obj, it will not affect the new one.

### Shallow & Deep Copy

Shallow copy just copies the data surfacely, which causes problem with the dynamically allocated memory. As it just copies the address of the memory location, and the copied version also points to the same memory location. Later when you change a single value, every value pointing to that will change..
Deep copy solves the problem of shallow copy. It not only copies the data surfacely but also copies the dynamically allocated memory, so changing one value wont affect the others as of now, they are pointing to different memory locations.

## Destructor

Destructor is used to destroy the allocated memory. It happens by default when our object is out of scope. But it doesnot destroy the dynamically allocated memory, so we have to delete that on our own.
-Same name as Class with '~' before it.

\* \* normally ta memory clear hunxa after program ends, but dynamically allocated memory remains. If left so causes memory leak. After the program ends, the memory would be of no use and no pointer will be point towards them and will just occupy the system's memory. So to prevent this, we must use (delete) to destroy the DAM.

## Inheritance

When properties & member functions of base class are passed on to the derived class..

Class A(parent, base) -> Class B(child, derived)

### Order:
Parent Constructor
Child Constructor
Child Destructor
Parent Destructor

### Modes of Inheritance
Private data can't be inherited, only accessible inside the class.
Protected data can be inherited and accesible inside the class. If privately inherited, it is private else, it remains protected.
Public data can be inherited. If privately inherited the data becomes private, protectedly inherited then it becomes protected and publicly=publicly...

### Types of Inheritance

Single inheritance : Single parent to single child,
Multilevel inheritance: Grandparent - parent - child....
Multiple inheritance : Single child two parent...
Hierarchical inheritance : Single Parent two child...
Hybrid inheritance : mix of all categories, multiple inheritance, multilevel....


## Polymorphism 
Polymorphism is the ability of objects to take on different forms or behave differently depending on the context in which they are used.

-Compile time polymorphism :
---constructor overloading
---function overloading
    same class ma functions with same name: no of params different ki type of param different hunu paryo...

-Run time polymorphism
---function overriding
    parent ra child dubai sanga eutai function hunxa with different implementation, in that case, parent wala function chai overrident hunxa by the child class function..., it will get more priority.

---virtual functions
    virtual class are the functions which have the term virtual before them and is expected to be redefined in the derived class..
    its concept is similar to that of overriding, 
    it is dynamic in nature, decalred in the base class and overriden by the child class. it is only called during runtime..

## Abstraction
Hiding all unnecessary details & showing only the important parts;;
---the best example of abstraction can be defined with the access modifiers... one of the way();

difference between data hiding and abstracction is that, data hiding only hides the data but abstraction also shows the important details;;;

it can be applied using Abstract classes;
---abstract classes are used to provide a basee class from which other classes can be derived..
--- it is not meant for creating objects, it can not be instantiated and are meant to be inherited.
--- typically used to define an interface for derived class.
---it forces derived classes to implement the pure virtual functions, otherwise it throws an error.
--- instance banauna namile pani hamile euta pointer banauna milxa jasle chai tyo derived classes ko obj harulai point garxa which implements the pure virtual function.


## Static Keyword
Static variables:
---in a function : created an initialized once for the lifetime of the program, retains its value across multiple function calls and is initialized only once.
---in a class: created and initialized once and shared by all the objects of the class

Static objects 
--- created once and exists for the lifetime of the code.



