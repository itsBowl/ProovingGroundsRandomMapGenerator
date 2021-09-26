#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <random>
#include <cstdio>


int main() {
	std::vector<std::string> maps = { "Altar of Flame", "Anomaly", "Bannerfall", "Burnout", "Cauldron", "Convergence", "Dead Cliffs", "Endless Vale", "Exodus Blue", "Fortress", "Fragment", "Javelin-4", "Midtown", "Pacifica", "Radiant Cliffs", "rusted Lands", "Twilight Gap", "Widow's Court", "Wormhaven" };
	std::mt19937 mersenne{ static_cast<std::mt19937::result_type>(std::time(nullptr)) };
	std::uniform_int_distribution<> die{ 1, 20 };
	int map_length = maps.size();
	die(mersenne);
	std::cout << "First Number Discarded (Ensures better random generation)\n";
	int map_1 = die(mersenne) - 1;
	int map_2 = die(mersenne) - 1;
	int map_3 = die(mersenne) - 1;
	std::cout << "Maps are, in order: " << maps[map_1] << ", " << maps[map_2] << ", " << maps[map_3] << '\n';
	std::system("pause");
	return 0;
}

/*Written by Bowl:
@itsBowl on Twitter
Bowl#2799 on Discord
Don't be a dick*/