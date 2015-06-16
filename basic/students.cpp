// Author : Sabituddin Bigbang

#include <iostream>
using namespace std;

class Students {
public: 
	// constructor
	Students() {
		name = "anonim";
		age = 19;
		city = "Bandung";
	}

	// constructor by paramete
	Students(const char* _name, int _age, const char* _city) {
		name = _name;
		age = _age;
		city = _city;
	}

	// Destructor
	~Students() {
		cout << "Hello, it's destructor!" << endl;
	}

	// Setter
	// Getter
	// Other Method
	void printStudent() {
		cout << "---------your identity--------" <<  endl;
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "City : " << city << endl;
	}


private:
	const char * name;
	int age;
	const char * city;
};

int main() {
	cout << " Object Oriented Programming " << endl;
	Students S1;
	Students S2 = Students("Rambo",69,"Jakarta");
	S1.printStudent();
	S2.printStudent();
	return 0;
}


