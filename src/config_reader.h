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

	/* Brief: Same as get_value()
	   Input: Key
	   Returns: Corresponding value as string*/
	std::string get_value_str(std::string key);

	/* Input: Key
	   Returns: Converts valid Corresponding value to int*/
	int get_value_int(std::string key);

	/* Input: Key
	   Returns: Converts valid Corresponding value to float*/
	float get_value_float(std::string key);


	/* Return: Map with key and value */
	std::map<std::string, std::string> get_data()
	{
		return data;
	}


private:
	const std::string m_path;
	std::map<std::string, std::string> data;

};