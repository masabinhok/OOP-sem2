/*
stream use garxa cpp le input output ko lagi, stream is an abstraction that represents a file from which data is read or to be written.

ios::
istream: input; ostream: output iostream: both 
ifstream : input file ofstream: output file; fstream both 

class hierarchy : 
ios_base - ios -istream - ifstream 
                                  -fstream
ios_base - ios  -ostream -ofstream 
*/

// good(): no error - true
// fail(): error - true
// eof(): end of file reach = true
// bad(): fatal error - true

/*

friend istream& operator >>(istream& is, Point& p){
  cout << "ENter a number: ";
  is >> p.n ;
  return is;
}

friend ostream& operator << (ostream& os, Point& p){
  cout << "the number is : " << p.n << endl;
  return os;
  }

  int main () {
    Point p;
    cin >> p; //calls friend ifstream wala
    cout << p ;  //calls friend ofstream wala..
  }
*/


/*
  program ko data output vayera file lai dida, ofstream
  program ma file ko data input garda ifstream
*/

/*
ascii files , human readable format ma hunxa
binary, raw no human readable, efficient for large data sets but to harder to inspect manually.

//read kasari garne ta

ifstream inFile("sabin.txt");
string content;
while(inFile >> content) {
  cout << content << " ";
}

ofstream outFile("sabin.txt");
outFile << "Writing to file!";


















*/