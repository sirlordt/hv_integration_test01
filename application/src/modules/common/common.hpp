#pragma once

#include <cstring>
#include <iostream>
#include <fstream>
#include <memory>

#include <nanojson/nanojson.hpp>

#include <uuid_v4/uuid_v4.h>

namespace common {

const std::string get_file_path( const std::string& file );
std::stringstream read_text_file_content( const std::string& path_file_to_read );
nanojson::element get_config( const std::string& config_path_file );

}
