// file I/O handling
#include <iostream>
#include <fstream> // file include
using namespace std;
// useful classes are
// fstreambase class
// ifstream input -> derived from fstreambase
// ofstream
// in order to work with files in c++ you will have to open it
// there are two ways  to open a file
// 1. using constructor
//  2. using the member function open () of the class
int main()
{
    string st = "mehta ";

    // ofstream out_obj("sample60.txt"); // write operation
    // out_obj<<st;

    // ofstream ek class h fstream class se
    // opening files using constructor
    string st2;
    ifstream in_obj("sample60.txt");
    //   in_obj>>st2;
    getline(in_obj, st2);

    cout << st2;

    return 0;
}
/*3 useful classes 
fstreambase
 ifstream -> derived from above 
 ofstream -> derived from above 
 read -> ifstream ka ek obj lets say in     write ->                                             
 ifstream in ("this.txt");                     ofstream out("this .txt")
 string s ;                                    string s ="harry ";                                               out<<s;
 in >>s;

 */