// COMPARING HEIGHTS OF TWO STUDENTS USING RELATION OPERATORS IN OPERATOR OVERLOADING //
#include<iostream>
using namespace std;

class Student{
    int feet =0; 
    int inches =0; 
    
    public:
    void getHeight(int f,int i)
    {
        if(f>= 0 && (i >= 0 && i <12))
        {
            feet=f;
            inches=i;
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    bool operator >(Student s2)
    {
        if(feet>s2.feet)
            return true;
        else
         return false;
    }
    bool operator <(Student s2)
    {
        if(feet<s2.feet)
            return true;
        else
         return false;
    }
  bool operator ==(Student s2)
    {
        if(feet==s2.feet)
            return true;
        else
         return false;
    }
    bool operator !=(Student s2)
    {
        if(feet!=s2.feet)
            return true;
        else
         return false;
    }
};

int main()
{
    Student s1,s2;
    
    s1.getHeight(3,0);
    s2.getHeight(2,11);
    
    if(s1 >s2)
        cout << "Student 1 is taller than student 2"<< endl;
    else if(s2 <s1)
        cout << "Student 2 is taller than student 1"<< endl;
    else if(s2==s2)
        cout <<"Both have equal height"<< endl;
    else
        cout<<"There height are not equal" <<endl;
    

    return 0;
}
