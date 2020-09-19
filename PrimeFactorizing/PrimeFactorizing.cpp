// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

#include <iostream>
#include <list>
#include <iterator>
#include <cstdint>

using namespace std;

uint64_t getSmallestDivisor(uint64_t num)
{
	for (size_t i = 2; i < num + 1; i++)
	{
		if (num % i == 0) return i;
	}
}

list<uint64_t> primeFactorizing(uint64_t num)
{
	list <uint64_t> factors;
	uint64_t current = num;
	uint64_t dividend;
	while (current > 1)
	{
		dividend = getSmallestDivisor(current);
		factors.push_back(dividend);
		current /= dividend;
	}
	return factors;
}

int main()
{
	list<uint64_t> numbers;
	for (size_t i = 0; i < 1000; i++)
	{
		numbers.push_back(i);
	}
	for (uint64_t num : numbers) 
	{
		list<uint64_t> primes;
		primes = primeFactorizing(num);
		for (uint64_t prime : primes)
		{
			cout << prime << ' ';
		}
		cout << endl;
	}
	
}