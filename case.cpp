// Creating a sequential file.
#include <cstdlib> // exit function prototype              
#include <fstream> // contains file stream processing types
#include <iostream>
#include <string>       
// #include "includes/fmt/format.h" // In C++20, this will be #include <format>  
using namespace std;

int main() {
   ofstream output{"clients.txt", ios::out};

   int account;
   string name; 
   double balance;

   // read account, name and balance from cin, then place in file
   while (cin >> account >> name >> balance) {
      output <<account<<" "<<name<<" "<<balance<<"\n"; 
   }   
}
