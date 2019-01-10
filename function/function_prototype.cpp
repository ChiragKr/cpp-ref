#include <iostream>

using namespace std;

void func(int); // function prototype

int main()
{
    func(17);
    return 0;
}

void func(int x){
    cout << "Inside func! param = "<< x << endl;
}
