#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(NULL)); //seed

	for (int i = 0; i < 6; i++) {
		int num = 54 + (rand() % 90); //random number -  0 a 90
      if (num > 64 && num <= 90) { //int -> char
        char cnum = (char)num;
        cout << cnum << " ";
      }
      else {
        while (num > 9) { //tens to unity
          num = num - 10;
        }
        cout << num;
      }
	}
  
	system("PAUSE");
	return 0;
}
