#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

class Hero{
    //properties
    private:
    int health;
    char level;

    public:
    char* name;
    static int time;


    Hero(){
        cout<<"Constructor is called"<<endl;
        name = new char[100];
    }
    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }
    //Parameterised constructor
    Hero(int health){
        this->health = health;
    }
    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }

    //Copy Constructor
    Hero(Hero& temp){
        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        cout<<"Copy Constructor is called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
        this->name = ch;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }
    void setHealth(int health){
        this->health=health;
    }
    void setLevel(int level){
        this->level = level;
    }
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    void print(){
        cout<<"Health is: "<<this->health<<endl;
        cout<<"Level is: "<<this->level<<endl;
        cout<<"Name is "<<this->name<<endl;
    }
    static int random()
    {
        return time;
    }
};

int Hero :: time = 10;

int main(){
    cout<<Hero::time<<endl;
    cout<< Hero::random();










    // Hero h1;
    // Hero* h2 = new Hero();
    // // delete h2;
    
    
    
    
    
    
    // Hero h1;
    // h1.setHealth(10);
    // h1.setLevel('A');
    // char name[] = "NARUTO";
    // h1.setName(name);
    // h1.print();

    // Hero h2(h1);
    // h2.print();

    // h1.name[0] = 'B';
    // h1.print();
    // h2.print();
    
    
    // Hero h1;
    // h1.setHealth(10);
    // h1.setLevel('A');
    // h1.print();

    // //Copy constructor
    // // h2.health = h1.health;
    // // h2.level = h1.level;
    // Hero h2(h1);
    // // Hero h2 = h1;
    // h2.print();



    // Hero a(10);
    // Hero*b = new Hero(11,'C');

    // a.print();
    // b->print();


    // //Creation of object statically.. Deletes automatically when the code block ends
    // Hero h;
    // h.setHealth(10);
    // h.setLevel('A');
    // h.print();

    // //Creation of object dynamically.. Deletes manually
    // Hero* a = new Hero;
    // a->setHealth(11);
    // a->setLevel('B');
    // a->print();
    // return 0;
}