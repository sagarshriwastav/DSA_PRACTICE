#include <bits/stdc++.h>
using namespace std;
/*Time Complexity=O()
Space Complexity=O()
inputs=>
outputs=>*/
class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
    void speak()
    {
        cout << "human speaks " << endl;
    }
};
class Dog
{
public:
    int age;
    int weight;
    void bark()
    {
        cout << "Dog is barking " << endl;
    }
};
class Hybrid : public Dog, public Human
{
};
class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male sleeping " << endl;
    }
};

int main()
{
    Male obj1;
    cout << obj1.color << endl;
    cout << obj1.weight << endl;
    cout << obj1.age << endl;
    cout << obj1.height << endl;
    obj1.setWeight(69);
    cout << obj1.weight << endl;
    obj1.sleep();
    Hybrid H1;
    H1.speak();
    H1.bark();
    return 0;
}