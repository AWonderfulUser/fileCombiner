std::string line; // Temp variable containing the line for getline
std::string fileListString; // Temp variable containing the user input
std::string delimiter = ","; // The delimiter of file names
size_t pos = 0; // Temp variable setting the position of the cursor to split
std::string token; // Temp variable to indicate the current split token
std::vector<std::string> fileListVector; // Variable containing the file names
std::vector<std::string> content; // Temp variable containing the content that'll be written
std::string targetFile; // Variable containing the file to be sent the lines