#include "File.h"

int main(int argc, char* argv[]){
	Reader reader("C:\\Users\\franciscojose\\Source\\Repos\\ReadingFiles\\Project1\\Project1\\data\\text.txt");
	Writer writer(reader);
	std::cout << writer.text;
	std::cin.get();
	return 0;
}