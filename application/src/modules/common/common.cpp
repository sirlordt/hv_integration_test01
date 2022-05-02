
#include "common.hpp"

namespace common {

const std::string get_file_path( const std::string& file )
{

  std::string result = file;

  size_t found = file.find_last_of( "/\\" );

  if ( found != std::string::npos )
  {

    result = file.substr( 0, found ) + "/";

  }

  return result;

}

std::stringstream read_text_file_content( const std::string& path_file_to_read )
{

  std::stringstream result {};

  std::ifstream stream_file_input = {};

  try
  {

    stream_file_input = std::ifstream( path_file_to_read );

    if ( stream_file_input.is_open() )
    {

      std::string line {};

      while ( std::getline( stream_file_input, line ) )
      {
        result << line;
      }

      stream_file_input.close();

    }

  }
  catch ( const std::exception& ex )
  {

    std::cout << "Exception: " << ex.what() << std::endl;

    if ( stream_file_input.is_open() )
    {

      stream_file_input.close();

    }

  }

  return result;

}

nanojson::element get_config( const std::string& config_path_file )
{

  nanojson::element result {};

  try {

    auto config_content = read_text_file_content( config_path_file );

    result = nanojson::element::from_string( config_content.str() );

  }
  catch ( const std::exception &ex ) {

    std::cout << ex.what() << std::endl;

  }

  return result;

}

}
