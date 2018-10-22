#include "proj07_functions.h"
#include<iostream>
#include<string>
using std::string;
#include<set>
using std::set;
using namespace std;

int main() {
	set<string> rep;
	replaces("is", rep);
	int rep_size = rep.size();
	cout << rep_size << endl;
	system("pause");
}