#include <iostream>
#include <fstream>
#include "main.hpp"
#include <vector>

int main() {
    // Config
    std::cout << "Enter what files you want to combine (separated by a comma): ";
    std::cin >> fileListString;

    std::cout << "What file do you want to output to? ";
    std::cin >> targetFile;

    // Read the file names
    
    while(true) {
        pos = fileListString.find(delimiter);
        token = fileListString.substr(0, pos);
        fileListVector.push_back(token);
        fileListString.erase(0, pos + delimiter.length());
        if(token == fileListString) { break; }
    }

    // Read files
    for(int x = 0; x < fileListVector.size(); x++) {
        std::ifstream rfile(fileListVector[x]);
        if(rfile.is_open()) {
            while(getline(rfile, line)) {
                content.push_back(line);
            }
            rfile.close();
        } else {
            std::cout << "Could not read file " + fileListVector[x] << std::endl;
        }
    }
    
    // Write to files
    std::cout << content.size() << std::endl;
    std::ofstream wfile(targetFile);
    if(wfile.is_open()) {
        for(int x = 0; x < content.size(); x++) {
            wfile << content[x] << std::endl;
        }
        wfile.close();
    } else {
        std::cout << "Could not write to file " + targetFile << std::endl;
        return 1;
    }
}