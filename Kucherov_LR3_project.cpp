#include <iostream>
using namespace std;
int foo1()
{
  int a=0;
  cin>>a;
  return a;
}

int foo3()
{
int c;
 int b=0;
 cin>>b;
 return b;
}

int foo4(int b1,int a1)
{
 int y = a1*b1;
 return y;
}

int foo5(int b3,int a3)
{
 int y1 =b3/a3;
 return y1;
}


int main()
{
for(;;){
cout<<"1. Введите число А:";
cout<<"2. Введите число B:";
cout<<"3. Операция умножения с числами А и В";
cout<<"4. Операция деленияя с числами А и В";
int r=0;
int g= foo1();
int g1= foo3();
cin>>r;
 switch(r)
 {
    case 1: foo1();
    case 2: foo3();
    case 3: foo4(g, g1);
    case 4: foo5(g,g1);
 }
 }
}
