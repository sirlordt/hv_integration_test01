# version 3.11 or later of CMake needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required( VERSION 3.11 )

project( MAIN_EXTERNAL_LIBRARIES
         VERSION 0.1
         DESCRIPTION "Main External Libraries" )

# ******* nanojson ********
add_subdirectory( ${PROJECT_SOURCE_DIR}/nanojson )  # look in nanojson subdirectory for CMakeLists.txt to process
# ******* nanojson ********

# ******* uuid_v4 ********
add_subdirectory( ${PROJECT_SOURCE_DIR}/uuid_v4 )  # look in uuid_v4 subdirectory for CMakeLists.txt to process
# ******* uuid_v4 ********

# ******* hv ********

add_subdirectory( ${PROJECT_SOURCE_DIR}/hv )  # look in soci subdirectory for CMakeLists.txt to process

# ******* hv ********

# ******* bcrypt ********

add_subdirectory( ${PROJECT_SOURCE_DIR}/bcrypt )  # look in soci subdirectory for CMakeLists.txt to process

# ******* bcrypt ********
