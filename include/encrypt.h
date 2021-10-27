#pragma once
#include <iostream>
#include <string>

using namespace std;

boost::multiprecision::cpp_int encrypt_message(int plain, boost::multiprecision::cpp_int e, boost::multiprecision::cpp_int n);