#include "array.h"
template <class t>
void array<t>::setlb(int a)
{
    lb = a;
}
template <class t>
void array<t>::set(int a)
{
    ub = a;
}
template <class t>
int array<t>::getlb()
{
    return lb;
}
template <class t>
int array<t>::getub()
{
    return ub;
}
template <class t>
array<t>::array()
{
    lb = 1;
    ub = 0;
    for (int i = lb; i<= ub; i++)
    a[i] = 0;
}
template <class t>
viod array<t>::create()
{
    int i;
    cout <<"enter the element: ";
    for (i = lb; i <= ub; i++)
    cin >> a[i];
}
template <class t>
void array<t>::insertatbeginning(t item)
{
    for(int i ub; i >= lb; i--)
    {
        a[i+1] = a[i]; 
    }
    a[lb] = item;
    ub = ub + 1;
}
template<class t>
void array<t>::intertatposition(int p, t item)
{
    if (p > ub || p < lb)
    {
        cout << "invalid position" << endl;
        return;
    }
    for (int i = ub; i >= p; i--)
    {
        a[i + 1] = a[i];
    }
    a[p] = item;
    ub = ub + 1;
}
template<class t>
void array<t>::deleteatend()
{
    if ub = ub - 1;
}
template<class t>
void array<t>::deleteatbeginning()
{
    for(int i = lb; i <= ub - 1; i++)
    {
        a[i] = a[i + 1];
    }
    ub = ub - 1;
}
template <class t>
void array<t>::deleteatposition(int p)
{
    if ( p > ub || p < lb)
    {
        cout << "invalid position" << endl;
        return;
    }
    for (int i = p; i<= ub - 1; i++)
    {
        a[i] = a[i + 1];
    }
    ub = ub - 1;
}
template <class t>
ostream& operator<<(ostream& os, const array<u>& m)
{
    int i;
    os << endl;
    for (i = m.lb; i <= m.ub; i++)
       os << m.a[i] << " ";
    os << endl;
    return os;   
}