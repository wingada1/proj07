#include "proj07_functions.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void deletes(const std::string & word, std::set<std::string>& result) {
	for (auto i = 0; i < word.size(); i++) {
		string w = word;
		w.erase(i, 1);
		result.insert(w);
	}
}

void replaces(const std::string & word, std::set<std::string>& result) {
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < word.size(); i++) {
		for (auto j = 0; j < alpha.size(); j++) {
			string w = word;
			w[i] = alpha[j];
			result.insert(w);
		}
	}
}

//std::string print_set(const std::set<std::string>& s) {
//}