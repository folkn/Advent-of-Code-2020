#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream file("day2.txt");
    std::string data = "";
    int correct = 0;
    while (getline(file, data))
    {

        int beginning = std::stoi(data.substr(0, data.find("-")));
        data.erase(0, data.find("-") + 1);
        int ending = std::stoi(data.substr(0, data.find(" ")));
        data.erase(0, data.find(" ") + 1);
        std::string letter = data.substr(0, data.find(":"));
        std::string password = data.substr(data.find(":") + 2);
        int count = 0;
        for (char i : password)
        {
            if (letter[0] == i)
                ++count;
        }

        if (beginning <= count && count <= ending)
            ++correct;
    }
    std::cout << correct << std::endl;

    file.close();
    return 0;
}