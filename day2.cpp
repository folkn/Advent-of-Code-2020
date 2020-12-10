#include <iostream>
#include <fstream>
#include <string>





int main()
{
    std::ifstream file("day2.txt");
    std::string data = "";
    int correct = 0; //part a
    int correct_pos = 0; //part b
    while (getline(file, data))
    {

        int beginning = std::stoi(data.substr(0, data.find("-")));
        data.erase(0, data.find("-") + 1);
        int ending = std::stoi(data.substr(0, data.find(" ")));
        data.erase(0, data.find(" ") + 1);
        char letter = data.substr(0, data.find(":"))[0];
        std::string password = data.substr(data.find(":") + 2);
        int count = 0;

        // Check requirements (part 1)
        for (char i : password)
        {
            if (letter == i) 
                ++count;
        }

        if (beginning <= count && count <= ending)
            ++correct;

        // Check position requirements (part 2)
        char letter1 = password[beginning-1];
        char letter2 = password[ending-1];
        if (!(letter1 == letter) != !(letter2 == letter) ) ++correct_pos;
    }
    std::cout << "Number of correct requirements: " << correct << std::endl;
    std::cout << "Number of correct positions: " << correct_pos <<std::endl;

    file.close();
    return 0;
}