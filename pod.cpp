#include "pod.h"
#include "accelerometer.h"

Pod::Pod()
{
  /// TASK 10 (PERSON B) ///////////////////////////////////////////////////////
  
  /// END OF TASK 10B //////////////////////////////////////////////////////////
}

std::string Pod::get_name()
{
  /// TASK 1 (PERSON A) ////////////////////////////////////////////////////////
  return "Poddy4";
  /// END OF TASK 1A ///////////////////////////////////////////////////////////
}

double Pod::get_max_speed()
{
  /// TASK 2 (PERSON B) ////////////////////////////////////////////////////////
  return -0.1;
  /// END OF TASK 2B ///////////////////////////////////////////////////////////
}

/// TASKS 3 (PERSON A) & 4 (PERSON B) //////////////////////////////////////////
double Pod::get_temperature()
{
  return 10;
}

double Pod::get_pressure()
{
  return 1;
}
/// END OF TASKS 3A & 4B ///////////////////////////////////////////////////////
