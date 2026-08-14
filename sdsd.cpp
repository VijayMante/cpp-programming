#include <iostream>
using namespace std;

class complex
{
private:
int real1,imag1;
int real2,imag2;
int real,imag;

public:
void input()
{
cout << "enter real imaginary parts of first number:";
cin >> real1 >> imag1;
cout << "enter real imaginary parts of second number:";
cin >> real2 >> imag2;
}

void add()
{
real=real1+real2;
imag=imag1+imag2;
}
void subtract()
{
real=real1-real2;
imag=imag1-imag2;
}
void display()
{
cout << real << "+" << imag << "i" << endl;
}
};
  
int main()
{
complex c;
c.input();
cout <<"addition: ";
c.add();
c.display();

cout << "subtraction:";
c.subtract();
c.display();

return 0;
}

  
