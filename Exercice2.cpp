#include <iostream>
using namespace std;
main()
{
    char c = '\x01';
    short int p = 10;

    p + 3; //13 int
    c + 1; //2 int
    p + c; //11 int
    3 * p + 5 * c; //35 int

}