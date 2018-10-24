#include <iostream>
#include <cmath>

using namespace std;
#define NAME_SIZE 64
#define BUFFER_SIZE 4096

class Person{
    int id;
    char name[NAME_SIZE];
public:
    void aboutMe(){
        cout<<"I am a person."<<endl;
    }
};

class Student: public Person{
public:
    void aboutMe(){
        cout<<"I am a student."<<endl;
    }
};


int main(){
    int a=0;
    cout<<(++a)<<endl;
    cout<<(--a)<<endl;
    cout<<(a--)<<endl;
    cout<<a++<<endl;
    return 0;

}
