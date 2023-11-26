#include <iostream>
using namespace std;

int main()
{
    string name;
    while (true)
    {
        getline(cin, name);
        if (name == "")
            break;
        cout << "Hello " << name << endl;
    }
    cout << "Hello Everyone";  
    return 0;
}