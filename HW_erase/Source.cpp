#include "string_.h"
#include <string>
using namespace std;


void main() {


	string_ s("world");
	//s.setString("ld");
	/*s.print();
	cout << endl;*/
	//s.insert(1, "hello");
	s.erase(1, 5);
	s.print();


	system("pause");


}