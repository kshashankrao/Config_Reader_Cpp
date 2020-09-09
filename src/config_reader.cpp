#include "config_reader.h"
#include <fstream>
#include <cassert>
#include <filesystem>

void config_reader::read()
{	
	bool is_file = std::filesystem::exists(m_path);
	if ( is_file == true)
	{
		std::ifstream inputFile(m_path);
		
		for (std::string line; getline(inputFile, line);)
		{
			std::cout << line << std::endl;
		}
	}
}

int main()
{
	config_reader reader("D:\\DeepLearning\\config_reader\\data\\test_config.txt");
	reader.read();

}
