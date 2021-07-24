#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char palavra[20];
    cin.getline(palavra, 20);
    
    if(strlen(palavra) >= 10) {
        cout << "palavrao\n";
    }
    else {
        cout << "palavrinha\n";
    }
    
    return 0;
}

