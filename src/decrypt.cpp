#include <iostream>
#include <cmath>
#include <boost/multiprecision/cpp_int.hpp>
#include "../include/decrypt.h"

using boost::multiprecision::cpp_int;

boost::multiprecision::cpp_int decrypt_message(int cipher, boost::multiprecision::cpp_int d, boost::multiprecision::cpp_int n)
{
	return (boost::multiprecision::cpp_int(boost::multiprecision::pow(boost::multiprecision::cpp_int(cipher), (int)d))) % n;
}