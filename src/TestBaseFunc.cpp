#include "TestBaseFunc.h"

void TestBaseFunc::SayHello()
{
    cout << "hello world" << endl;
}

int main() 
{
    TestBaseFunc func;
    func.SayHello();
    system("pause");
    return 0;
}