<<<<<<< HEAD
<<<<<<< HEAD
# Install script for directory: /Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample
=======
# Install script for directory: C:/Users/Angela/Documents/electronics/COMP-340-002/ClassExample
>>>>>>> master
=======
# Install script for directory: /Users/alexstalter/Desktop/GitHub/COMP-340-002/ClassExample
>>>>>>> master

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/ClassExample")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
<<<<<<< HEAD
file(WRITE "/Users/rmalmberg/Documents/340-Project2/COMP-340-002/ClassExample/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "C:/Users/Angela/Documents/electronics/COMP-340-002/ClassExample/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> master
=======
file(WRITE "/Users/alexstalter/Desktop/GitHub/COMP-340-002/ClassExample/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> master
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
