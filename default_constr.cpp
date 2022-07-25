#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
class hero
{
private:
    int health;
    /* data */
public:
    char level;
    static int timeToComplete;

    hero() // default constructor
    {
        cout << "constructor is called." << endl;
    }
    // parameterized constructor
    hero(int health)
    {
        cout << "address of this-> " << this << endl;
        this->health = health;
    }
    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    void print()
    {
        cout << level << endl;
        cout << health << endl;
    }

    int getHealth()
    {
        return health;
    }
    int getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    ~hero()
    { // destructor is started with "~" symbol.// It only same as constructor without tilda symbol as it also has no return statement , no data type, same name as class, no i/p parameters
        cout << "destructor is called" << endl;
    }
};
int hero::timeToComplete = 9;
int main()
{
    hero hr(8);
    cout << "address of hr " << &hr << endl;
    cout << hr.getHealth() << endl;
    // cout << hr << endl;

    // dynamically creating object
    hero *hh = new hero();
    hero *hhh = new hero;
    delete hh;
    delete hhh; // to delete dynamically allocated object we to delete it manually.
    hero hhhh(89, 'X');
    hhhh.print();
    hero r(hhhh); // Copy Constructor
    r.print();
    hero s(hhhh);
    r = s; // copy assgnment operator all parameters will be copied
    s.print();
    cout << hero::timeToComplete << endl;
    return 0;
}