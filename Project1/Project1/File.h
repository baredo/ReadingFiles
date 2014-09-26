#ifndef FILE_H
#define FILE_H
#include <iostream>

//File Class
class File{
public:
	File(char* fPath);
	File(char* fPath, char* text, int size);
	char* fPath;
	char* text;
	int size;
protected:
};
#endif


//Reader Class
class Reader : public File{
public:
	Reader(char* fPath);
	Reader(File file);
protected:
};


//Writer Class
class Writer : public File{
public:
	Writer(char* fPath);
	Writer(File file);
protected:
};