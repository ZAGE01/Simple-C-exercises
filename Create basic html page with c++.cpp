#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string name;
    string description;
    ofstream file;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Describe yourself: ";
    getline(cin, description);

    file.open("index.html");

    file << "<!DOCTYPE html>" << endl
         << "<html>" << endl
         << "<head> </head>" << endl
         << "<body>" << endl
         << "<center> <h1>" << name << "</h1> </center>" << endl
         << "<hr />" << description << "<hr />" << endl
         << "</body> </html>";

    return 0;
}