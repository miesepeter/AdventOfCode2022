#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream in_s;
	int complete_overlap = 0, partial_overlap = 0, first, second, third, fourth;
	string text; 

	in_s.open("input.txt");
	getline(in_s, text);

	while(!in_s.eof()) {
		
		int position = 0;
		char ch = text[position];
		int dash_1 = 0, comma = 0, dash_2 = 0, last = 0;
		
		while(ch != '\0') {
			if(ch == '-' && dash_1 == 0)
				dash_1 = position;
			if(ch == '-' && dash_1 != 0)
				dash_2 = position;	
			if(ch == ',')
				comma = position;
			last = position + 1;
			
			position ++;
			ch = text[position];
		}

		first = stoi(text.substr(0, dash_1)); //new
		second = stoi(text.substr(dash_1 + 1, comma - dash_1 - 1));
		third = stoi(text.substr(comma + 1 , dash_2 - comma - 1));
		fourth = stoi(text.substr(dash_2 + 1, last));

		if(first <= third && second >= fourth) {
			complete_overlap++;
		}
		else if(first >= third && second <= fourth) {
			complete_overlap++;
		}

		if(first >= third && first <= fourth) {
			partial_overlap++;
		}
		else if(second >= third && second <= fourth) {
			partial_overlap++;
		}
		else if(third >= first && third <= second) {
			partial_overlap++;
		}
		else if(fourth >= first && fourth <= second) {
			partial_overlap++;
		}
		getline(in_s, text);
	}
	cout << "Complete overlap: " << complete_overlap << endl;
	cout << "Partial overlap: " << partial_overlap << endl;
	in_s.close();

	return 0;
}
