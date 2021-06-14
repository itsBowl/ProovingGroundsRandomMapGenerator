#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <random>

int getRandomNumber(int min, int max) {
	double fraction{ 1.0 / (RAND_MAX + 1.0) };
	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}



int main() {
	int mapNumber{};
	std::vector<std::string> maps = { "Altar of Flame", "Anomaly", "Bannerfall", "Burnout", "Cauldron", "Convergence", "Dead Cliffs", "Endless Vale", "Exodus Blue", "Fortress", "Fragment", "Javelin-4", "Midtown", "Pacifica", "Radiant Cliffs", "rusted Lands", "Twilight Gap", "Widow's Court", "Wormhaven" };
	std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
	std::uniform_int_distribution<> die{ 1, 20 };
	//std::cout << size(maps) << '\n';
	die(mersenne);
	std::cout << "First Number Discarded (Ensures better random generation)\n";
	mapNumber = die(mersenne);
	std::cout << "First Map: " << maps[mapNumber - 1] << " Map Number: " << mapNumber << '\n';
	std::system("pause");
	mapNumber = die(mersenne);
	std::cout << "Second Map: " << maps[mapNumber - 1] << " Map Number: " << mapNumber << '\n';
	std::system("pause");
	mapNumber = die(mersenne);
	std::cout << "Third Map: " << maps[mapNumber - 1] << " Map Number: " << mapNumber << '\n';
	std::system("pause");
	return 0;
}

/*Written by Bowl:
@itsBowl on Twitter
Bowl#2799 on Discord
Don't be a dick*/