/*
Author: Shashank Rao
*/

#include "config_reader.h"
#include <fstream>
#include <cassert>
#include <filesystem>
#include <algorithm>
#include <exception>

void config_reader::read()
{	
	const std::string delimiter = "=";
	bool is_file = std::filesystem::exists(m_path);
	if ( is_file == true)
	{
		std::cout << "[INFO] Config file found" << std::endl;
		std::ifstream inputFile(m_path);
		
		for (std::string line; getline(inputFile, line);)
		{
			line.erase(std::remove_if(line.begin(), line.end(), isspace), line.end());
			std::string key = line.substr(0, line.find(delimiter));
			std::string value = line.substr(line.find(delimiter)+1, line.size());
			data.insert(std::pair<std::string, std::string>(key, value));
		}
	}

	else
	{
		std::cout << "[INFO] Config file not found" << std::endl;
	}
}

std::string config_reader::get_value(std::string key)
{
	try
	{
		return data.at(key);
	}

	catch (std::exception& e)
	{
		std::cout << "[INFO] Error - Key not found: " << e.what() << std::endl;
	}
}
int main()
{
	config_reader reader("path\\to\\config.txt");
	reader.read();
	std::cout << reader.get_value("name");
}
