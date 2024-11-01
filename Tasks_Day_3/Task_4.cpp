//backtrace for calling functions
#include <iostream>
#include <string>

#define EnterFn BACKTRACE d(__PRETTY_FUNCTION__)

class BACKTRACE
{
private:
    /* data */
public:
     BACKTRACE(std::string func);
     ~BACKTRACE();
    std::string function_name=0;
};

BACKTRACE::BACKTRACE(std::string func) :function_name(func)
{
    std::cout<< "ENTER TO ["<< function_name <<"]"<<std::endl;
}

BACKTRACE::~BACKTRACE()
{
    std::cout<< "EXIT FROM ["<< function_name <<"]"<<std::endl;
}


void fun1();
void fun2();
void fun3();

void fun1(){
EnterFn;
fun2();
}

void fun2(){
 EnterFn;
fun3();   
}

void fun3(){
  EnterFn;  
}


int main ()
{
EnterFn;
fun1();

return 0;
}