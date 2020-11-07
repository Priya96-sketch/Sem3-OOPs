// OPERATOR OVERLOAD USING FRIEND FUNCTION //
/*          OVERLOADING + ,- ,/ ,AND /                      */

#include<iostream>
using namespace std;
class Cents
{
private:
int m_cents;

public:
Cents(int cents) { m_cents = cents; }

// add Cents + Cents using a friend function
friend Cents operator +(const Cents &c1, const Cents &c2);

friend Cents operator -(const Cents &c1, const Cents &c2);

friend Cents operator *(const Cents &c1, const Cents &c2);

friend Cents operator /(const Cents &c1, const Cents &c2);
int getCents() const { return m_cents; }
};

// note: this function is not a member function!
Cents operator+(const Cents &c1, const Cents &c2)
{
Cents temp=c1.m_cents + c2.m_cents;
return temp;
}

Cents operator-(const Cents &c1, const Cents &c2)
{
Cents temp=c1.m_cents - c2.m_cents;
return temp;
}

Cents operator*(const Cents &c1, const Cents &c2)
{
Cents temp=c1.m_cents * c2.m_cents;
return temp;
}
Cents operator/(const Cents &c1, const Cents &c2)
{
Cents temp=c1.m_cents / c2.m_cents;
return temp;
}

int main()
{
Cents cents1(6);
Cents cents2(8);

Cents centsSum = cents2 * cents1;
cout << "I have " << centsSum.getCents() << " cents.\n";

return 0;
}
