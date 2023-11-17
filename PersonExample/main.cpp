//
//  main.cpp
//  PersonExample
//
//  Created by Kaan Şengün on 17.11.2023.
//

#include <iostream>
#include "Person.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    Person *pArr[]={new TurkishPerson("Ogun"),new TurkishPerson("Duygu"),new TurkishPerson("Oguz"),new DeutchePerson("Thomas"),new DeutchePerson("Carl")};
    
    int numberOfPerson=sizeof(pArr)/sizeof(pArr[0]);
    for(int i=0;i<numberOfPerson;i++){
        for(int j=0;j<numberOfPerson;j++){
            if(i!=j){
                pArr[i]->sayHi(*pArr[j]);
            }
        }
        cout<<"\n";
    }
    
    
    
    
    
    return 0;
}
