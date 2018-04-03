#include <iostream>


int main() {

float countOfSnickers = 2;
float countOfHamburger = 2;
float countOfCola = 2;
float countOfPanda = 0.5;
float countOfRoshen = 0.2;
float countOfZhabel = 4;
float countOfBread = 4;
float countOfVodka = 2;
float countOfTableCloth = 3.5;
float priceOfSnickers = countOfSnickers*1.5;
float priceOfHamburger = countOfHamburger*2.6;
float priceOfCola = countOfCola*1.2;
float priceOfPanda = countOfPanda*6;
float priceOfRoshen = countOfRoshen*13;
float priceOfZhabel = countOfZhabel*3.3;
float priceOfBread = countOfBread*0.3;
float priceOfVodka = countOfVodka*10;
float priceOfTableCloth = countOfTableCloth*2.5;


std::cout << priceOfSnickers + priceOfHamburger + priceOfCola + priceOfPanda + priceOfRoshen + priceOfZhabel + priceOfBread + priceOfVodka + priceOfTableCloth;

return 0;

}

