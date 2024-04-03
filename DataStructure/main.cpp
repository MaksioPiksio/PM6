#include <iostream>
/*
Co wyniosłem z lekcji:
    w cpp mozna:
    a == b ? true : false;
(2h xd)
*/
class DataStructure
{
protected:
    int* arr;
    size_t arrLength;
    static const size_t maxLength = 10;
    int readData(size_t i){return 0;}
public:
    DataStructure()
    {
        arrLength = 0;
        arr = new int[arrLength];
    }

    bool increase(size_t n){return 0;}
    bool decrease(size_t n){return 0;}

    bool isEmpty()const
    {
        return arrLength == 0;
    }

    bool isFull()const
    {
        return arrLength >= maxLength;
    }

    ~DataStructure()
    {
        delete[] arr;
    }
};
class Stack : public DataStructure
{
public:
    Stack(){}
    bool push(int x){return 0;}
    bool pop(){return 0;}
    int readStack(size_t i){return 0;}

};

int main()
{
    DataStructure test;
    std::cout << test.isEmpty();
    return 0;
}
