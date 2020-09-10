/*
Author: Shashank Rao
*/

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

	/* Read the config file. Store the key and values in the map.*/
	void read();

	/* Input: Key 
	   Returns: Corresponding value*/
	std::string get_value(std::string key);

	/* Return: Map with key and value */
	std::map<std::string, std::string> get_data()
	{
		return data;
	}


private:
	const std::string m_path;
	std::map<std::string, std::string> data;

};