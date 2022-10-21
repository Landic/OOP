#include <iostream>
#include <map>
#include <fstream>

using namespace std;

typedef map<string, int> mymap;

int main() {
	map<string,int> my_map;
	pair<string, int> mypair;
	const int rep = 10;

	string buffer;
	ifstream in("Text.txt");
	if (in.is_open()) {
		while (!in.eof()) {
			in >> buffer;
			if (my_map.size() == 0) {
				my_map.insert(mymap::value_type("", 0));
			}
			for (map<string, int>::iterator it = my_map.begin(); it != my_map.end(); it++)
			{
				if (it->first == buffer) { 
					it->second++;
				}
				else {
					my_map.insert(mymap::value_type(buffer, 1));
				}
			}
		}
		in.close();
		int count = 0;
		for (map<string, int>::iterator it = my_map.begin(); it != my_map.end(); it++)
		{
			if (it->second >= rep) {
				cout << it->first << "\n" << it->second << endl;
				if (it->second > count) {
					count = it->second;
				}
			}
		}
		for (map<string, int>::iterator it = my_map.begin(); it != my_map.end(); it++)
		{
			if (it->second == count) {
				cout << it->first << "\n" << it->second << endl;
			}
		}
	}
	else {
		cout << "File didn't open" << endl;
	}
}