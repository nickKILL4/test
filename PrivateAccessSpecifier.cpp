#include<iostream>

using namespace std;

class Human{
    private:
        int age;
        int getAge(){
            return age-5;
        }
    /*private access specifiers are used to hide information outside the
    class defination we have to again use public specifier to get access 
    to the private class*/ 

    public:
        void setAge(int value){
            age = value;
        }
        void displayAge(){
            cout<< getAge()<< endl;
        }
};

int main(){
    Human *obj = new Human();
    obj->setAge(24);
    obj->displayAge();
    return 0;
}
