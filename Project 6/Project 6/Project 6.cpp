// Project 6 : Calculate the numbers of bytes and bits//
#include <iostream>
using namespace std;
int main()
{
    int Kilobyte, bytes,bits;
    cout << "Please Enter the Number of Kilobyte ";
    cin >> Kilobyte;
    bytes = Kilobyte*1024;
    bits = bytes * 8;
    cout << "The Number of Kilobytes is =" << Kilobyte<<"\n";
    cout << "The Number of bytes is =" << bytes<<"\n";
    cout << "The Number of bits is =" << bits << "\n";
    return 0;


}

