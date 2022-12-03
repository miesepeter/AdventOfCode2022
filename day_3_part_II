#include <iostream>
#include <fstream> 
#include <cstring> //used for strlen

using namespace std;

int main() {

        ifstream in_s;
        char ch, same_letter, first[99], second[99], third[99];
        int sum = 0, iterations = 0, rounds = 0;

        in_s.open("input.txt"); 
        in_s.get(ch);

        while(!in_s.eof()) { 

                if(ch == '\n') {
                        //cout << rounds << endl;

                        if(rounds == 0)
                                first[iterations] = '\0';
                        if(rounds == 1)
                                second[iterations] = '\0';
                        if(rounds == 2)
                                third[iterations] = '\0';

                        rounds = (rounds + 1) % 3;
                        iterations = 0;

                }

                if(ch == '\n' && rounds == 0) {

                        int len_first = strlen(first);
                        int len_second = strlen(second);
                        int len_third = strlen(third);

                        for(int f = 0; f < len_first; f++) {
                                for(int s = 0; s < len_second; s++) {
                                        for(int t = 0; t < len_third; t++) {
                                                if(first[f] == second[s] && second[s] == third[t])
                                                        same_letter = first[f];
                                        }
                                }
                        }
                        if(same_letter >= 'a' && same_letter <= 'z')
                                sum += same_letter - ('a' - 1);
                        else if(same_letter >= 'A' && same_letter <= 'Z')
                                sum += same_letter - ('A' - 1) + 26;
                }
                else {
                        if(rounds == 0)
                                first[iterations] = ch;
                        if(rounds == 1)
                                second[iterations] = ch;
                        if(rounds == 2)
                                third[iterations] = ch;
                        iterations ++;
                }
                in_s.get(ch);
        }
        cout << endl << sum << endl;
        in_s.close();

        return 0;
}
