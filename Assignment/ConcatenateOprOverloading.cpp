/* Concatenate of two string object using operator overloading. */

#include <iostream> 
#include <string.h> 
  
using namespace std; 
class Concate { 
  
public: 
    char str[50]; 
    Concate() {} 
 
    Concate(char str[]) 
    { 
        strcpy(this->str, str); 
    } 
  Concate operator+(Concate& s2) 
    { 
        
Concate s3;
strcat(this->str,s2.str);
strcpy(s3.str, this->str); 
 return s3;
} 
}; 
 
int main() 
{ 

char str1[]="Priya"; 
char str2[]="Mondal"; 
    Concate a1(str1); 
    Concate a2(str2); 
    Concate a3; 
    a3=a1+a2; 
    cout<<"RESULT :"<<a3.str; 
 return 0; 
}

