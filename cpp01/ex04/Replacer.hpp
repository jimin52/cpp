//
// Created by jimin on 2022/12/04.
//

#ifndef CPP_REPLACER_HPP
#define CPP_REPLACER_HPP

#include <iostream>
#include <fstream>

class Replacer {

private:
	const std::string	infileName;
	std::string			outfileName;
	const std::string	fromText;
	const std::string	toText;
	std::ifstream		infileStream;
	std::ofstream 		outfileStream;

	void OpenInfileStream();
	void OpenOutfileStream();
	void CloseStream();

public:
	//Constructor, Destructor
	Replacer(const std::string &infileName, const std::string &fromText, const std::string &toText);
	virtual ~Replacer();

	void ReplaceText();

	//getter
	const std::string &getInfileName() const;
	const std::string &getOutfileName() const;
	const std::string &getFromText() const;
	const std::string &getToText() const;

};


#endif //CPP_REPLACER_HPP
