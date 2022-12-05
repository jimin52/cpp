//
// Created by jimin on 2022/12/04.
//

#include "MyException.hpp"
#include "Replacer.hpp"

Replacer::Replacer(const std::string &infileName, const std::string &fromText, const std::string &toText) : infileName(
		infileName), fromText(fromText), toText(toText) {

	if (Replacer::infileName.empty())
		throw MyException("File Name is empty");
	if (Replacer::fromText.empty())
		throw MyException("fromText is empty");
	Replacer::outfileName = this->infileName;
	Replacer::outfileName.append(".replace");
}

Replacer::~Replacer() {
	CloseStream();
}

void Replacer::OpenInfileStream() {
	Replacer::infileStream.open(getInfileName());
	if (!Replacer::infileStream.is_open())
		throw MyException("Infile Open Fail");
}

void Replacer::OpenOutfileStream() {
	Replacer::outfileStream.open(getOutfileName());
	if (!Replacer::outfileStream.is_open())
		throw MyException("Outfile Open Fail");
}

void Replacer::CloseStream() {
	infileStream.close();
	outfileStream.close();
}

void Replacer::ReplaceText() {

	std::string buffer;
	std::string replaceBuffer;
	size_t pos;

	OpenInfileStream();
	OpenOutfileStream();
	while (!infileStream.eof()) {
		std::getline(infileStream, buffer);
		if (infileStream.eof())
			replaceBuffer.append(buffer);
		else
			replaceBuffer.append(buffer + '\n');
		pos = replaceBuffer.find(getFromText(), 0);
		while (pos < replaceBuffer.length()){
			replaceBuffer.erase(pos, getFromText().length());
			replaceBuffer.insert(pos, getToText());
			pos = replaceBuffer.find(getFromText(), pos + getToText().size());
		}
		outfileStream << replaceBuffer;
		replaceBuffer.clear();
	}
	CloseStream();
}

const std::string &Replacer::getInfileName() const {
	return infileName;
}

const std::string &Replacer::getOutfileName() const {
	return outfileName;
}

const std::string &Replacer::getFromText() const {
	return fromText;
}

const std::string &Replacer::getToText() const {
	return toText;
}
