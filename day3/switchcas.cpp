#include <iostream>

using namespace std;

int main()
{
    char button;
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Hola"<<endl;
        break;
    case 'c':
        cout<<"Salut"<<endl;
        break;
    case 'd':
        cout<<"Namaste"<<endl;
        break;
    case 'e':
        cout<<"Ciao"<<endl;
        break;
    
    default:
    cout<<"I am still learning!"<<endl;
        break;
    }
    return 0;
}