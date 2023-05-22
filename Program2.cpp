#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    
    void read(void);
    void read_2(void);
    void check(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number:" << endl;
    cin >> s;
}

void binary ::read_2(void)
{
    cout << "Enter a number:" << endl;
    cin >> s;
}

void binary ::check(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.check();
    b.ones();
    b.display();
    return 0;
}
