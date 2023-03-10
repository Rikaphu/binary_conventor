#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "  ----------------\n  BINARY CONVERTER\n  ----------------\n";

    string text = "";

    cout << "text input: ";
    getline(cin, text);
    
    cout << "\n";
    cout << "binary output: ";

    for (int i = 0; i < text.length(); i++) {
        char c = text[i];
        string out = "";

        for (int i = 0; i < 8; i++) {
            char bit = c & 1 ? '1' : '0';
            c >>= 1;
            out = bit + out;
        }

        cout << out << " ";
    }
}