# Config_Reader_Cpp

## Description

Simple config parser for c++. <br/>

Features:<br/>
* Input - Key value <br/>
* Supported output - String, float, int <br/>

## Configuration file format

name=abc<br/>
age=20<br/>

## Using in your project

Example top CmakeLists.txt <br/>

```
cmake_minimum_required(VERSION 2.8.9)
project(test_config_reader) 
add_subdirectory(thirdparty/Config_Reader_Cpp) 
add_executable(test_config src/main.cpp) 
target_link_libraries (test_config PUBLIC config_reader)
```

## Usage

```
#include <config_reader.h>
..
..
config_reader reader("path\\to\\config.txt");
reader.read();

std::string val_str = reader.get_value_str("age");
int val_int = reader.get_value_int("age");
float val_int = reader.get_value_float("age");
```

## To do
- [ ] Create the source code as a cmake library that can be used in other projects.<br/>
- [x] Convert the value to integer/float if present.<br/>
- [x] Additional feature to relax the format, example key = value (with space).<br/>


