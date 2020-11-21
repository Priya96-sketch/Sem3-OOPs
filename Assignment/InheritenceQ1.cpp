/* Write a c++ program using the following class hierarchy of an educational institution.

a) Class Staff (name, code).
b) Class Officer (grade), subclass of Staff.
c) Class Teacher (subject), subclass of Staff.
d) Class Typist (speed), subclass of Staff.
e) Class CasualTypist (daily wages), subclass Typist.
f) Class RegularTypist (remuneration), subclass of Typist.

Create different objects of each class except Staff, input values for different variables for each one.   */


#include<iostream>
using namespace std;

//base class
class Staff
{
protected:
    string name;
    double code;
    public:
    Staff(){};
    Staff(string n, double c)
    {
        name=n;code=c;
    }
    void displayData()
    {
        cout<<name<<endl<<code<<endl;
    }
};
class Officer:public Staff
{
    protected:
    char grade;
    public:
        Officer(){};
        Officer(string n ,double c ,char g):Staff(n,c),grade(g){};
        void displayData()
        {
            Staff::displayData();
            cout<<grade<<endl;
        }

};
class Teacher :public Staff
{
protected:
    string subject;
public:
    Teacher(){};
    Teacher(string s,double c,string sub):Staff(s,c),subject(sub){};
     void displayData()
        {
               Staff::displayData();
            cout<<subject<<endl;
        }

};
//Typist
class Typist : public Staff
{
protected:
    int speed;
public:
    Typist(){};
    Typist(string s, double c,int sep):Staff(s,c),speed(sep){};
     void displayData()
        {
            Staff::displayData();
            cout<<speed<<endl;
        }

};
//Casual Typist
class Casual_typist:public Typist
{
protected:
    int daily_wages;
public:
    Casual_typist();
    Casual_typist(string n,double c,int sep,int d_w):Typist(n,c,sep),daily_wages(d_w){};
    void displayData()
        {

            Typist::displayData();
            cout<<daily_wages<<endl;
        }

};
//RegularTypist
class Regular_typist:public Typist
{
protected:
    int remunertion;
public:
    Regular_typist();
    Regular_typist(string n,double c,int sep,int rem):Typist(n,c,sep),remunertion(rem){};
    void displayData()
        {

              Typist::displayData();
            cout<< remunertion<<endl;
        }
};

int main()
{
    Officer obj1("Priya",1,'A');
    obj1.displayData();
    
    Regular_typist obj2("Guddan",2,100,10000);
    obj2.displayData();
    
    Casual_typist obj3("Agasthya",3,100,10000);
    obj3.displayData();


}
