#include <iostream>
#include <string>
using namespace std;

int main() {
   string username; 
   string destination;
   int ports;
   string fifol;
   string final_dest;
   cout << "WECOME TO THE SCP FILE XFER CMD PREP PROGRAM\n" <<endl;
   cout << "Give me your username: "; // username input
   cin >> username; // get user input  
   cout << "Your username is: " << username <<endl; 
   cout << "give me your destination: "; // destination input 
   cin >> destination;
   cout << "your destination is: " << destination << endl;
   cout << "any ports? enter them here (default is 22): "; //port input
   cin >> ports;
   cout << "your port is: " << ports << endl;
   cout << "which file/folder are we moving?: ";
   cin >> fifol;
   cout << "your file is: " << fifol <<endl;
   cout << "where do you want it at the destination?: ";
   cin >> final_dest;
   cout << "your destination directory is: " << final_dest << endl;
   std::string boiler = "SCP -r -P";
   cout << "copy and paste the following command into terminal \n";
   cout << "your final command is: "<<boiler<<" "<<ports<<" "<<fifol<<" "<<username<<'@'<<destination<<':'<<final_dest<<endl;


   return 0;
}