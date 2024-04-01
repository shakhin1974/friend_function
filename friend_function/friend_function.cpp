#include <iostream>
using namespace std;
class Number {
private:
    int a;
public:
    Number (int a) {
    this->a = a;
}
    friend int printNum(Number NUM)
    {
        return NUM.a + NUM.a;
        
    }
};

int main()
{
    Number n(1000);
    cout<<printNum(n)<<endl;

    return 0;
}