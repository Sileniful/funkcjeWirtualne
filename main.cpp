#include <iostream>

using namespace std;
class Animal{
public:
    virtual void animalSound(){
    cout<<"Rawr!!!"<<endl;
    }
};


class Kitty : public Animal{
public:
    void animalSound(){
    cout<<"Meow meow"<<endl;
    }
};

class Doggy : public Animal{
public:
    void animalSound(){
    cout<<"Woof woof"<<endl;
    }
};

class Piggy : public Animal{
public:
    void animalSound(){
    cout<<"Oink oink"<<endl;
    }


};


int main()
{
    Animal someAnimal;
    Kitty cat;
    Doggy dog;
    Piggy pig;
    cout<< "Some animal goes: ";
    someAnimal.animalSound();
    cout<<"Kitty goes: ";
    cat.animalSound();
    cout<<"Doggy goes: ";
    dog.animalSound();
    cout<<"Piggy goes: ";
    pig.animalSound();

    Animal *pointAnimal;
    cout<<"And now again with pointers :)"<<endl;
    pointAnimal=&someAnimal;
    pointAnimal->animalSound();
    pointAnimal=&cat;
    pointAnimal->animalSound();
    pointAnimal=&dog;
    pointAnimal->animalSound();
    pointAnimal=&pig;
    pointAnimal->animalSound();

    return 0;
}
