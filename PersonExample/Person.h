//
//  Person.h
//  PersonExample
//
//  Created by Kaan Şengün on 17.11.2023.
//
#include <iostream>
using namespace std;

class Person{
private:
    string perName;
public:
    Person(string name){perName=name;};
    string getName()const{return perName;}
    virtual string getNation()const{return " ";}
    virtual void sayHi(const Person &person){
        cout<<perName<<" says Hi "<<person.perName<<endl;
    }
    
};

class DeutchePerson:public Person{
public:
    DeutchePerson(string name):Person(name){}
    string getNation()const{return "Deutch";}
    void sayHi(const Person &person){
        if(getNation()==person.getNation()){
            cout<<getName()<<" says Hallo "<<person.getName()<<endl;
        }
        else{
            Person::sayHi(person);
        }
    }
};
class TurkishPerson:public Person{
public:
    TurkishPerson(string name):Person(name){}
    string getNation()const{return "Turkish";}
    void sayHi(const Person &person){
        if(getNation()==person.getNation()){
            cout<<getName()<<" says Merhaba "<<person.getName()<<endl;
        }
        else{
            Person::sayHi(person);
        }
    }
};

