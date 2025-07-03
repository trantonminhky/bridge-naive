#include "BlueConventionalCar.hpp"
#include "RedConventionalCar.hpp"
#include "BlueElectricCar.hpp"
#include "RedConventionalCar.hpp"

int main() {
	Car* car1 = new RedConventionalCar();
	Car* car2 = new BlueElectricCar();

	car1->info();
	car2->info();

	delete car1;
	delete car2;

	return 0;
}