#pragma once
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;

class keyGen 
{
public:
	boost::multiprecision::cpp_int p;
	boost::multiprecision::cpp_int q;
	boost::multiprecision::cpp_int n;
	boost::multiprecision::cpp_int phi_n;
	boost::multiprecision::cpp_int e;
	boost::multiprecision::cpp_int d;

	void prime_promt();
	void primenumber_check();
	boost::multiprecision::cpp_int calculate_n();
	boost::multiprecision::cpp_int calculate_phi();
	boost::multiprecision::cpp_int calculate_e();
	boost::multiprecision::cpp_int calculate_d();
};

