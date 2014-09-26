#include "File.h"
#include <string>
#include <iostream>
#include <fstream>

File::File(char* fPath){
	this->fPath = fPath;
	
	//Open file.
	std::ifstream in(fPath, std::ios::ate | std::ifstream::binary);
	
	//Estimate the size of the file and put the cursor at the beginning.
	size = in.tellg();
	in.seekg(0, in.beg);
	text = new char[size];

	//Reading the file.
	in.read(text, size);
	text[size] = '\0';

	//Close the file.
	in.close();
}

File::File(char* fPath, char* text, int size){
	this->fPath = fPath;
	this->text = text;
	this->size = size;
}

Reader::Reader(char* fPath) : File(fPath){
	
}

Reader::Reader(File file) : File(file.fPath, file.text, file.size){

}

Writer::Writer(char* fPath) : File(fPath){

}

Writer::Writer(File file) : File(file.fPath, file.text, file.size){

}