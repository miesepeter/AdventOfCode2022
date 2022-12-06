#include <iostream>
#include <fstream>
#include <cstring> //used for strlen

using namespace std;

int main() {

        ifstream in_s;
        char ch, same_letter, array[99], first[99], second[99];
        int sum = 0, iterations = 0;

        in_s.open("input.txt");
        in_s.get(ch);

        while(!in_s.eof()) {

                if(ch == '\n') {
                        array[iterations] = '\0';
                        int length = strlen(array);
                        int split = (length -1) / 2;

                        for(int i = 0; i <= split; i++) {
                                first[i] = array[i];
                        }
                        first[split+1] = '\0';

                        int loop = 0;
                        for(int i = split+1; i < (length); i++) {
                                second[loop] = array[i];
                                loop++;
                        }
                        second[loop] = '\0';

                        for(int i = 0; i <= split; i++) {
                                for(int k = 0; k <= split; k++) {
                                        if(first[i] == second[k]) {
                                                same_letter = first[i];
                                        }
                                }
                        }
                        cout << "Same letter is: " << same_letter << " ";
                        if(same_letter >= 'a' && same_letter <= 'z')
                                sum += same_letter - ('a' - 1);
                        else if(same_letter >= 'A' && same_letter <= 'Z')
                                sum += same_letter - ('A' - 1) + 26;

                        iterations = 0;

                }
                else {
                        array[iterations] = ch;
                        iterations ++;
                }
                in_s.get(ch);
        }
        cout << endl << sum << endl;
        in_s.close();

        return 0;
}
