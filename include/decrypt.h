#pragma once
#include <iostream>
#include <string>

using namespace std;

boost::multiprecision::cpp_int decrypt_message(int cipher, boost::multiprecision::cpp_int d, boost::multiprecision::cpp_int n);