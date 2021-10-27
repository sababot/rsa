#include "../include/keygeneration.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <boost/multiprecision/cpp_int.hpp>

using boost::multiprecision::cpp_int;
using namespace std;

void keyGen::prime_promt()
{
	//request input for q and p

	cout << "Enter prime number 1: " << endl;
	cin >> p;				   //input prime number 1
	cout << "\n";
	cout << "Enter prime number 2: " << endl;
	cin >> q;				   //input prime number 2
}

/*
void keyGen::primenumber_check()
{
	//check if q and p are prime

	vector<int> p_factors;
	for (int i = 2; i <= static_cast<int>(sqrt(p)); i++)
	{
		if (p % i == 0) {p_factors.push_back(i); p_factors.push_back(p/i);}
	}

	vector<int> q_factors;
	for (int i = 2; i <= static_cast<int>(sqrt(q)); i++)
	{
		if (q % i == 0) {q_factors.push_back(i); q_factors.push_back(q/i);}
	}

	if (p_factors.size() != 0 || q_factors.size() != 0) {throw (runtime_error("error: non prime number input entered"));}
}
*/

boost::multiprecision::cpp_int keyGen::calculate_n()
{
	//n = p * q

	n = p * q; 				   //n is the sum of the two prime numbers p and q
	return n;
}

boost::multiprecision::cpp_int keyGen::calculate_phi()
{
	//phi(n) = (p - 1) * (q -1)

	phi_n = 
	phi_n = (p - 1) * (q - 1); //phi of a number which is non prime is the product of the composition of phi of the prime numbers
	return phi_n;			   //phi of a prime number is (prime number - 1) so phi of n is (q - 1) * (p -1) 
}

boost::multiprecision::cpp_int keyGen::calculate_e()
{
	//1 < e < phi(n) and coprime with phi(n)

	int i = 2;

	while (gcd(i, phi_n) != 1) //repat until e(i) and phi_n are coprime
	{
		i++;
	}

	e = i;					   //1 < e < phi(n)
							   //e has to be coprime to phi(n)
	return e;
}

boost::multiprecision::cpp_int keyGen::calculate_d()
{
	//d * e mod phi(n) = 1

	int k = 1;

	while (((k * phi_n) + 1) % e != 0) 
	{
		k++;
	}

	d = ((k * phi_n) + 1) / e;

	return d;
}
