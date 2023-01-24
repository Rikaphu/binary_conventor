#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text = "";

    getline(cin, text);

    //cout << text.length() << "\n";
    //cout << text << "\n";

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