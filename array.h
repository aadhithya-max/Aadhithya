#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
#include <ostream>

template <class t>
class array
{
    int lb, ub;
    t a[100];
public:
    array();
    void setlb(int a);
    void setub(int a);
    int getlb();
    int getub();
    void create();
    void insertatend(t item);
    void insertatbeginning(t item);
    void intertatposition(int, t item);
    void deleteatend();
    void deleteatbeginning();
    void deleteatposition(int);
    template<class u> friend ostream& operator<<(ostream&, const array<u>&);
};