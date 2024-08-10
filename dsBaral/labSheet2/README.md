## Manipulators

format garna help garne operator,
endl: creates new line
setw(n): spacing of n equivalent units.

## Namespace

namespace chai euta region ho jun vitra declare vayeka identifiers harulai scope provide garxa. name collission lai prevent garxa vanum;;;
for example:
std library ma ni cout xa,
ani sbn library ma ni cout xa re;
when we are using both the libraries, we have to make sure which cout we are using, otherwise there'll be a conflict.
we can do that by:
std::cout;
sbn::cout;

jastai std euta default namespace honi, tesari nai hamile aafno namespace create garna sakxauu;

namespace nsn {
int item;
void showitem(int it)
{
cout<<it;
}
}

nsn bata item matra use garna paryo vane,
cout<<nsn::item;

or, hamile eslai include pani garna milxa;
using nsn::item;
tespaxi hamile,
cout<<item; garera access garna sakxau..

or, hamilai nsn namespace ma vayeko sabai kura use garna man xa vane;
using namespace nsn;
after this,
cout<<item;
showitem(item);

because we have already included the std namespace, so all the members are now accessible directly;

std::cout : std::cin
says that, cout and cin are defined inside the standard libraryyy and it functions according to the std namespace.

'using' declaration le chai hamilai
without needing to prefix the name with its namespace name; we can use it directly;;

using namespace std;

std::cout lekhirana pardainaa
cout is enough to make compiler understand;

but using namespace std is considered a bad practice: kina?

if we do so, we pollute our code with all the identifiers from the std library which might later on conflict with some global identifiers or other namespaces identifiers;

## Pass by reference

pass by reference ma chai hamile tyo variable ko memory address nai pass garxam, which sends the actual variable/object, ani function can directly work on that var/obj: tara pass by value ma chai tyo var/obj ko copy janthyo, ani any xed xaad to that var/obj would do nothing to the actual var/obj;;

//declare garne bela chai address linu paryo so, & operator use hunxaa.
void swap (int &x, int &y){
int t;
t=x;
x=y;
y=t;
}

call garne bela normally garne,
swap(a,b);

## Return by reference

return by reference lets you call function in the LHS of the eqn, where generally its called in the RHS:

example:

int & sbn(int &a){
return a;
}

int main(){
int x = 10;
sbn(x) = 25;
cout<<x; //25
}

when we call sbn(x) function the function is called x is passed and taken as a but its the reference of x not a copy, now instead of returning a = something or a value, it returns x as a whole and now we can use it LHS and assign it any value;

## Overloaded function

hamile eutai naam vako function different kaam ko lagi use garna sakxauuu, given dataset anusar different kam garna sakxa function le: polymorphism??

jastai
convert(); //no argument
convert(int n); //single argument
convert(float n, int i); //double argument

//function can be overloaded considering these:
:: number of argumentss;
:: data types of arguments;


## Inline function

function hamile memory space save garna banaune garxauu, but it takes time, ie makes the execution slower:: tara yedi euta short function xa vane tesle memory space ra time dubai consume garne vayo:: so tesko soln ho inline function;;;

inline function le garne k ho vane>> replaces the block of code where the function is called, to delcare an inline function we just need to prefix the function with 'inline' keyword;;;

it saves both memory and time;; congrats!


## Default Argument
hamile kunai pani function lai tesko sabai arguments specify nagari bolauna sakxammm; tesko lagi hamile tyo arguments haruko default value deko hunu parxaaa

void defarg(chat ch='%', int n =25); //decalring default arguments

now we can call the function as defarg();
or defarg('$')
or defarg('$', 23);

default value will be assigned only if there is no arguments specified::





