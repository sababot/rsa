#include <iostream>
#include <cmath>
#include <boost/multiprecision/cpp_int.hpp>
#include "../include/encrypt.h"

using boost::multiprecision::cpp_int;

boost::multiprecision::cpp_int encrypt_message(int plain, boost::multiprecision::cpp_int e, boost::multiprecision::cpp_int n)
{
	return (boost::multiprecision::cpp_int(boost::multiprecision::pow(boost::multiprecision::cpp_int(plain), (int)e))) % n;
}