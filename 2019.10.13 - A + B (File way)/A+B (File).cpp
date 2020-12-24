#include <iostream>
#include <fstream>

using namespace std;

int a = 0;
int b = 0;
int c = 0;
fstream file;

int main() {

    file.open("input.txt",ios::in);
    if(!file){
        cout << "Error: File can't be opened";
        return 0;
    }

    file>>a;
    file>>b;

	file.close();

	c = a + b;

    if(!file){
        cout << "Error: File can't be opened";
        return 0;
    }

	file.open("output.txt");
	file << c << endl;
	file.close();

	return 0;
}
