#include <iostream>
#include <string>

int main() {

std::string userName;
std::string pairName;
int userOld;
int pairOld;

std::cout << "Hello!\n";
std::cout << "What is your name?\n";
std::cin >> userName;
std::cout << "How old are you?\n";
std::cin >> userOld;

std::cout << "Shut up! Enough talk about you.\n";

std::cout << "What is the name of pair?\n";
std::cin >> pairName;
std::cout << "How old is your pair?\n";
std::cin >> pairOld;

if (userOld > pairOld) {
std::cout << userName << " older than " << pairName;
}
else if (pairOld > userOld) {
std::cout << pairName << " older than " << userName;
}
else {
std::cout << pairName << " and " << userName << " of the same age.";
 } 


return 0;
}
