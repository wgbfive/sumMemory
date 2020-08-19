#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<float> numbers;
    string buffer, unit;
    float number, total = 0;
    ifstream file;
    file.open("lastingermemory.txt");
    while (getline(file, buffer, ' ')) {
        getline(file, unit);
        if (unit == "MB")
            numbers.push_back(stof(buffer));
        if (unit == "GB")
            numbers.push_back(stof(buffer) * 1000);
        if (unit == "TB")
            numbers.push_back(stof(buffer) * 1000000);
    }
    for (unsigned int i = 0; i < numbers.size(); i++)
        total += numbers.at(i);
    cout << "Total Size:" << endl;
    cout << total << " MB" << endl;
    cout << total / 1000 << " GB" << endl;
    cout << total / 1000000 << " TB" << endl;
}
