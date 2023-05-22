#include <iostream>
using namespace std;

class shop
{
    int item_id[100];
    int item_price[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void set_price(void);
    void display_price(void);
    //void sum_price(int a, int b);
};

void shop ::set_price(void)
{
    cout << "Enter the Id of your item: " << endl;
    cin >> item_id[counter];
    cout << "Enter the price of your item: " << endl;
    cin >> item_price[counter];
    counter++;
}

void shop ::display_price(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << item_id[i] << " is " << item_price[i] << endl;
    }
}

// void shop ::sum_price(int a, int b)
// {
//     item_id[i] = a;
//     item_id[i++] = b;
//     return a+b;
// }
int main()
{
    shop reliance;
    reliance.initcounter();
    reliance.set_price();
    reliance.set_price();
    reliance.display_price();

    return 0;
}
