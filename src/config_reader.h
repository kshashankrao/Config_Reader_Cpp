#pragma once
#include <iostream>
#include <stdio.h>
#include<string>
#include<vector>
#include <map> 

class config_reader
{
public:
	config_reader(std::string path):m_path(path)
	{}
	
	void read();
	std::string get_value(std::string key);

private:
	const std::string m_path;
	//std::map<std::string, std::string> data;

};