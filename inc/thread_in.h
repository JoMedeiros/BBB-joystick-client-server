#ifndef THREAD_HEADER
#define THREAD_HEADER

#include <string> // for string manipulation
#include <iostream> // for terminal printing
#include <fstream>  // for file operations
#include <chrono> // for milliseconds
#include <stdexcept>  // for exceptions
#include <vector>  // for vector manipulation

const char QUIT_KEY = 'q';
const char DOWN_KEY = 's';
const char LEFT_KEY = 'a';
const char RIGHT_KEY = 'd';
const char NO_KEY = 'x';

const char* POTENCI_PATH = "../input_test/potenc";
const char* LDRESIS_PATH = "../input_test/ldr";
const char* PBUTTON_PATH = "../input_test/pb";

const char* JOYSTICK_PATH = "/home/debian/josivan_e_natalia/t3_joystick/thread/joystick";

const int ANALOGIC_MID = 2000;

struct bbb_input{
  std::string name;
  std::string path;
  std::string value;
};

// for vector manipulation
enum in_name { POTENCI = 0,  PBUTTON = 1,  LDRESIS = 2 };

// declaring bbb_inputs
bbb_input pot;
bbb_input pbu; 
bbb_input ldr; // pressionado = 0, else 1;

// declaring vector
std::vector<bbb_input> INPUTS;

#endif