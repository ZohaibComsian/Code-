
1:
#include <iostream>
using namespace std;
int main() {
int x = 27; 
int *ip; 
ip = &x; 
cout << "Value of x is : ";
cout << x << endl;
cout << "Value of ip is : ";
cout << ip<< endl;
cout << "Value of *ip is : ";
cout << *ip << endl;
return 0;
}

2:
#include <iostream>
using namespace std;
int main() {
int *ip;
int arr[] = { 10, 34, 13, 76, 5, 46 };
ip = arr;
for (int x = 0; x < 6; x++) {
cout << *ip << endl;
ip++;
}
return 0;
}

3:
#include <iostream>
using namespace std;
int main() {
int *ip = NULL;
cout << "Value of ip is: " << ip;
return 0;
}

4:
#include <iostream>
using namespace std;
int main() {
int *p, x = 30;
p = &x;
cout << "Value of x is: " << *p;
return 0;
}

5:
#include <iostream>
using namespace std;
void test(int*, int*);
int main() {
int a = 5, b = 5;
cout << "Before changing:" << endl;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
test(&a, &b);
cout << "\nAfter changing" << endl;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
return 0;
}
void test(int* n1, int* n2) {
*n1 = 10;
*n2 = 11;
}

6:
#include <iostream> 
using namespace std; 
int main() 
{ 
int number=30; 
int * p; 
p=&number;//stores the address of number variable 
cout<<"Address of number variable is:"<<&number<<endl; 
cout<<"Address of p variable is:"<<p<<endl; 
cout<<"Value of p variable is:"<<*p<<endl; 
 return 0; 
} 

7:
#include <iostream> 
using namespace std; 
int main() 
{ 
int a=20,b=10,*p1=&a,*p2=&b; 
cout<<"Before swap: *p1="<<*p1<<" *p2="<<*p2<<endl; 
*p1=*p1+*p2; 
*p2=*p1-*p2; 
*p1=*p1-*p2; 
cout<<"After swap: *p1="<<*p1<<" *p2="<<*p2<<endl; 
 return 0; 
} 

8:
#include<iostream>
using namespace std;
int main()
{
 int num = 10;
 int val;
 int *iptr;
 iptr = &num;
 val = *iptr;
 cout<<"num = "<<num<<endl;
 cout<<"val = "<<val<<endl;
 cout<<"iptr = "<<iptr<<endl;
 cout<<"*iptr = "<<*iptr<<endl;
 cout<<endl;
 return 0;
}

9:
#include<iostream>
using namespace std;
int main()
{
 int tot, i;
 long int *id;
 float *marks;
 cout<<"Enter the array size: ";
 cin>>tot;
 id = new long int[tot];
 marks = new float[tot];
 for(i=0; i<tot; i++)
 {
 cout<<"Enter ID and Marks of Student No."<<(i+1)<<": ";
 cin>>id[i]>>marks[i];
 }
16
Zohaib Sarwar (SP22-BCS-097)
 cout<<"\n\nStudent ID\t\tStudent Mark\n";
 for(i=0; i<tot; i++)
 cout<<id[i]<<"\t\t"<<marks[i]<<"\n";
 delete[] id;
 delete[] marks;
 return 0;
}

10:
#include<iostream>
using namespace std;
int main()
{
 int *ptr, arr[5], i;
 cout<<"Enter any five numbers: ";
 for(i=0; i<5; i++)
 cin>>arr[i];
 ptr = arr;
 for(i=0; i<5; i++)
 {
 cout<<"\n\nptr = "<<*ptr;
 cout<<"\narr["<<i<<"] = "<<arr[i];
 ptr++;
 }

11:
#include<iostream>
using namespace std;
void swap(int &, int &);
int main()
{
 int a=50, b=60;
 cout<<"----Before swap----\n";
 cout<<"a = "<<a<<"\t b = "<<b;
 swap(a, b);
 cout<<"\n\n----After swap----\n";
 cout<<"a = "<<a<<"\t b = "<<b;
 cout<<endl;
 return 0;
}

void swap(int &x, int &y)
{
 int temp;
 temp = x;
 x = y;
 y = temp;
}

12:
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 int i,*x;
 x=&i;
 for(*x=2; *x<=10; *x=*x+2)
 {
 cout<<*x<<" ";
 }
 return 0;
}

13:
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 int i,n,c,*x,*nm,*fc;
 x=&i;
 nm=&n;
 fc=&c;
 *fc=0;
 cout<<"Enter a number ";
 cin>>*nm;
 for(*x=1; *x<=*nm; *x=*x+1)
 {
 if(*nm % *x==0)
 {
 *fc=*fc+1; // counting the factors
 }
 }
 if(*fc==2)
23
Zohaib Sarwar (SP22-BCS-097)
 {
 cout<<"Prime Number";
 }
 else
 {
 cout<<"Not Prime Number";
 }
 return 0;
}

14:
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 int i,n,s,d,*x,*nm,*sum,*dg;
 x=&i;
 nm=&n;
 sum=&s;
 dg=&d;
 *sum=0;
 cout<<"Enter a number ";
 cin>>*nm;
 while(*nm>0)
 {
 *dg=*nm%10;
 if(*dg % 2==0)
 {
25
Zohaib Sarwar (SP22-BCS-097)
 *sum=*sum+*dg;
 }
 *nm=*nm/10;
 }
 cout<<"Sum of even digits = "<<*sum;
 return 0;
}

15:
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
 int *x[4];
 int a=10,b=20,c=30,d=40,i;
 x[0]=&a;
 x[1]=&b;
 x[2]=&c;
 x[3]=&d;
 for(i=0; i<4; i++)
 {
 cout<<"Value of x["<<i<<"] = "<<x[i]<<" and Points to = "<<*x[i]<<endl;
 }
 return 0;
}
