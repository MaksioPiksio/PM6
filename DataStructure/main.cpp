#include <iostream>

class DataStructure
{
protected:
    int* arr;
    size_t arrLength;
    static const size_t maxLength = 4;

    //bool increase(size_t n){return 0;}
    //bool decrease(size_t n){return 0;}

public:
    DataStructure()
    {
        arrLength = 0;
        arr = new int[arrLength];
    }

    bool isEmpty()const
    {
        return arrLength == 0;
    }

    bool isFull()const
    {
        return arrLength >= maxLength;
    }

    void readData()
    {
        for(int i = 0; i < maxLength; i++)
        {
            std::cout << arr[i] << std::endl;
        }
    }

    ~DataStructure()
    {
        delete[] arr;
    }
};
class Stack : public DataStructure
{
public:
    bool push(int x)
    {
        if(!isFull())
        {
            int* temp = new int[arrLength];
            for(size_t i = 0; i < arrLength; i++)
                temp[i] = arr[i];
            delete[] arr;
            arr = new int[++arrLength];
            for(size_t i = 0; i < arrLength; i++)
                arr[i] = temp[i];
            arr[arrLength - 1] = x;
            delete[] temp;
            return true;
        }
        return false;
    }
    bool pop()
    {
        if(!isEmpty())
        {
            int* temp  = new int[--arrLength];
            for(size_t i = 0; i < arrLength; i++)
                temp[i] = arr[i];
            delete[] arr;
            arr = new int[arrLength];
            for(size_t i = 0; i < arrLength; i++)
                arr[i] = temp[i];
            delete[] temp;
            return true;
        }
        return false;
    }

    int peek()const
    {
        if(!isEmpty()) return arr[arrLength - 1];
        else exit(131);
    }

};

int main()
{
    Stack test;

    int arr2[] = {100000001 ,564 ,100000001 ,465};
    //int arr2[] = {};

    for(size_t i = 0; i < sizeof(arr2)/sizeof(int); i++)
    {
        if(!test.isFull()) test.push(arr2[i]);
        else std::cerr << "Stos jest przepelniony!";
    }

    Stack test2;
    for(int i = 0; i < 4; i++)
    {
        test2.push(test.peek());
        test.pop();
    }

    test.readData();

    return 0;
}
