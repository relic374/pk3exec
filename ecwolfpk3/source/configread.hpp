#pragma once

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

std::vector<std::string> ReadConfig(std::string fname) {
     std::ifstream cFile(fname.c_str());
     if(cFile.is_open()) {
          std::string line;
          while(std::getline(cFile, line)) {
               line.erase(std::remove_if(line.begin(), line.end(), isspace), line.end());

               if( line.empty() || line[0] == '#' ) {
                    continue;
               }

               auto delimiterPos = line.find(";");
               auto one = line.substr(0, delimiterPos);
               auto two = line.substr(delimiterPos + 1);
               std::vector<std::string> vect;
               vect.push_back(one);
               vect.push_back(two);
               return vect;
          }
     }

     else {
          std::cerr << "Couldn't open config file (possible e.404).\n";
     }
     std::vector<std::string> v;
     return v;                     // error guarder
}


// etc
std::vector<std::string> ReturnValue(std::string fname) {
     std::ifstream cFile(fname.c_str());
     if(cFile.is_open()) {
          std::string line;
          for(;std::getline(cFile, line);) {
               line.erase(std::remove_if(line.begin(), line.end(), isspace), line.end());

               if( line.empty() || line[0] == '#' ) {
                    continue;
               }

               auto delimiterPos = line.find("=");
               auto name = line.substr(0, delimiterPos);
               auto value = line.substr(delimiterPos + 1);
               std::vector<std::string> vect;
               vect.push_back(value);
               return vect;
          }
     }

     else {
          std::cerr << "Couldn't open config file (possible e.404).\n";
     }
     std::vector<std::string> v;
     return v;                     // error guarder
}

std::vector<std::string> ReturnName(std::string fname) {
     std::ifstream cFile(fname.c_str());
     if(cFile.is_open()) {
          std::string line;
          while(std::getline(cFile, line)) {
               line.erase(std::remove_if(line.begin(), line.end(), isspace), line.end());

               if( line.empty() || line[0] == '#' ) {
                    continue;
               }

               auto delimiterPos = line.find("=");
               auto name = line.substr(0, delimiterPos);
               auto value = line.substr(delimiterPos + 1);
               std::vector<std::string> vect;
               vect.push_back(name);
               return vect;
          }
     }

     else {
          std::cerr << "Couldn't open config file (possible e.404).\n";
     }
     std::vector<std::string> v;
     return v;                     // error guarder
}
