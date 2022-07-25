#include <bits/stdc++.h>
using namespace std;
#include "hero2.cpp"

/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
class hero
{
    // by default value is private (Access Modifiers)
public:
    // char name[100];
    char level;
    char level2;
    char level3;
    char level4;
    char level5;
    int health;
};
// private:
//     /* data */
// public:
//     hero(/* args */);
//     ~hero();
// };

// hero::hero(/* args */)
// {
// }

// hero::~hero()
// {
// }

int main()
{
    hero h1;
    h1.health = 70;
    h1.level = 'b';
    // h1.name = {'a','b'};
    hero2 h2;
    cout << "size of: " << sizeof(h1) << endl;
    cout << "size of: " << sizeof(h2) << endl;
    // to access properties and data members we use dot operator
    cout << "health is " << h1.health << endl;
    cout << "level is " << h1.level << endl;

    // Dynamically allocatation of object
    hero *hd = new hero;
    (*hd).health = 80;
    hd->health = 90; // Alternative method for calling using -> arrow notation
    (*hd).level = 'D';
    hd->level = 'E';
    cout << "size of hd: " << sizeof(hd) << endl;
    cout << "size of hd: " << sizeof(*hd) << endl;
    cout << "health is " << (*hd).health << endl;
    cout << "health is " << hd->health << endl;
    cout << "level is " << (*hd).level << endl;
    cout << "level is " << hd->level << endl;
    return 0;
}