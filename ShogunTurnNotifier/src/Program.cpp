#include <thread>
#include <iostream>
#include <exception>

import ShogunProcessReader;

int main()
{
	//TODO: Play an audio que when it is your turn.
	auto shogun = ShogunProcessReader();
	while (true)
	{
		std::cout.clear();

		try { std::cout << "Turn state: " << (shogun.IsMyTurn() ? "your turn" : "not your turn") << '\n'; }
		catch (const std::exception& ex) { std::cerr << ex.what() << '\n'; break; }

		using namespace std::chrono_literals;
		std::this_thread::sleep_for(1000ms);
	}
}