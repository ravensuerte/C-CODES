/*
exercise 3 
What does the C++ program on the opposite page output on screen?

#include <iostream>
using namespace std;
void pause(); // Prototype
int main()
{
cout << endl << "Dear reader, "
<< endl << "have a ";
pause();
cout << "!" << endl;
return 0;
}
void pause()
{
cout << "BREAK";
}
*/

#include <iostream>
using namespace std;
void pause(); // Prototype
int main()
{
cout << endl << "Dear reader, "
<< endl << "have a ";
pause();
cout << "!" << endl;
return 0;
}
void pause()
{
cout << "BREAK";
}

//answer - the program starts with a new line 
/*

Dear reader,
have a BREAK!
*/

