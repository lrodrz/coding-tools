#include <iostream>
#include <string>
using namespace std;

int main() {
    int ports;
    string url;
    string final_dest;
    cout << "WECOME TO THE CURL PROGRAM\n" <<endl;
    cout << "whats the URL?: ";
    cin >> url;
    cout << "your file is at: " << url <<endl;
    cout << "what do you want to call it?: ";
    cin >> final_dest;
    cout << "your destination directory is: " << final_dest << endl;
    std::string boiler = "curl -o";
    cout << "copy and paste the following command into terminal \n";
    cout << "your final command is: "<<boiler<<" "<<url<<" "<<final_dest<<endl;


   return 0;
}