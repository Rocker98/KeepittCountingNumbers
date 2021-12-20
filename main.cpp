#include <iostream>
#include <cstring>
#include <set>
#include <string>

typedef std::set<std::string> uniqueSet;

std::string readInput();
uniqueSet splitText(std::string& inputText);

int main(int argc, char** argv) {	
	std::string inputText = readInput();
	uniqueSet setOfUnique = splitText(inputText);
	std::cout << "Total unique elements: " << setOfUnique.size() << std::endl;
	return 0;
}

std::string readInput(){
	std::string inputText;
	std::string inputLine;
	std::cout << "Type your text and when you are done enter \"END\"" << std::endl;
	while (getline(std::cin, inputLine)) //support multiline input
	{
	    if (inputLine == "END")
	        break;
	
	    inputText += inputLine;
	}
	return inputText;
}

uniqueSet splitText(std::string& inputText) {
	uniqueSet uniqueArr;
	char* tok = std::strtok(&inputText[0], " ");
	while (tok)
    {
    	std::cout << tok  << std::endl;
    	uniqueArr.insert(std::string(tok));
    	tok = strtok(NULL, " ");
    }
    return uniqueArr;
}
