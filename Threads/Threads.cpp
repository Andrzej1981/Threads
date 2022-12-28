

#include <iostream>
#include <thread>

void foo()
{
    printf("Hello from Foo\n");
}

int main()
{
    std::thread thread1(foo);
    thread1.join();

    std::cout << "Hello from main\n";
}
