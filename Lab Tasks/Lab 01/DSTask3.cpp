#include <iostream>
#include <cstring>
using namespace std;

class Document {
private:
	char* textcontent;

public:
	Document(const char* content) {
		textcontent = new char[strlen(content) + 1];
		strcpy(textcontent, content);
	}

	~Document() {
		delete[] textcontent;
	}

	Document(const Document& cont) {
		textcontent = new char[strlen(cont.textcontent) + 1];
		strcpy(textcontent, cont.textcontent);
	}
	Document& cont1 = (const Document & cont){
	if (this == &cont)
	return *this;
	}

};