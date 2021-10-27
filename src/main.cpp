#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include "../include/keygeneration.h"
#include "../include/encrypt.h"
#include "../include/decrypt.h"

using namespace std;
using boost::multiprecision::cpp_int;

int main()
{
	//generate keys
	keyGen keys;
	keys.prime_promt();
	keys.calculate_n();
	keys.calculate_phi();
	keys.calculate_e();
	keys.calculate_d();
	cout << "\n";

	cout << "keys: " << endl;
	cout << "--> n:      ";
	cout << keys.n << endl;

	cout << "--> phi(n): ";
	cout << keys.phi_n << endl;

	cout << "--> e:      ";
	cout << keys.e << endl;

	cout << "--> d:      ";
	cout << keys.d << endl;

	// choice
	char choice;
	cout << "\n";
	cout << "encrypt or decrypt (e/d): ";
	cin >> choice;

	//encrypt
	if (choice == 'e')
	{
		int plain;
		cout << "\n";
		cout << "message (number(s)): ";
		cin >> plain;
		boost::multiprecision::cpp_int cipher = encrypt_message(plain, keys.e, keys.n);
		cout << "cipher: ";
		cout << cipher << endl;
		cout << "\n";
	}

	//decrypt
	else if (choice == 'd')
	{
		int cipher_input;
		cout << "\n";
		cout << "cipher: ";
		cin >> cipher_input;
		boost::multiprecision::cpp_int result = decrypt_message((int)cipher_input, keys.d, keys.n);
		cout << "message: ";
		cout << result;
		cout << "\n";
	}
	
	else
	{
		cout << "option not valid" << endl;
		return 0;
	}

	return 0;
}
