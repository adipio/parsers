#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class DataEntry {
    public:
		void parse(string);
		void readParsed();

    private:
		vector<string> parsed;
};

void DataEntry::parse(string s) {
	string delimiter = "/";
	size_t pos = 0;
	string token;
	while ((pos = s.find(delimiter)) != std::string::npos) {
		token = s.substr(0, pos);
		parsed.push_back(token);
		s.erase(0, pos + delimiter.length());
	}
	parsed.push_back(s);
}


void DataEntry:: readParsed() {
	for (auto x : parsed)
		cout << x << endl;
}

