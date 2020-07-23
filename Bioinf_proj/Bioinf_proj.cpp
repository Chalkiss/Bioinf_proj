#include <fstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;


std::vector<string> snippets;
int main() {
    ifstream openFile;

    openFile.open("C:\\Users\\filga\\Documents\\cpp projects\\input.txt");

    if (openFile.is_open()) {
        string tmp;
        while (getline(openFile, tmp)) {
            snippets.push_back(tmp);
        }
    }
    for (int i = 0; i < snippets.size(); i++)
        cout << snippets[i]<<endl;
}