//New.Constructor.Destructor.Delete
#include <iostream>
using namespace std;

class Base{
    public:
        Base();
        ~Base();
        void *operator new(size_t);
        void operator delete(void *);
};

Base::Base(){
    cout << "Constructor.";
}

Base::~Base(){
    cout << "Destructor.";
}

void *Base::operator new(size_t size){
    cout << "New.";
    void *storage = malloc(size);
    return storage;
}

void Base::operator delete(void *ptr){
    cout << "Delete.";
    free(ptr);
}

int main(){
    Base *ptr = new Base;
    delete ptr;
    return 0;
}