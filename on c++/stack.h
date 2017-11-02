#ifndef stackbyme
#define stackbyme

namespace stdVahe{

#include <iostream>
#include <vector>

class stack
{
    std::vector<int> vector;
public:
    void push(int);
    int read();
    int read_pop();
    int Size();
    int max_Size();
    int empty();
    void out();
};

}
#endif
