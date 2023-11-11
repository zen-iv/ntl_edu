#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>
#include <mutex>

using namespace std::chrono_literals;

const int MAX_CLIENTS = 15;
std::atomic<int> clients_counter = 1;


void clientsThread() {
	while (clients_counter != MAX_CLIENTS) {
		std::this_thread::sleep_for(100ms);
		++clients_counter;
		std::cout << "Clients now: " << clients_counter << "\n";
	}
}

void operatorTread() {
	while (clients_counter != 0) {
		std::this_thread::sleep_for(200ms);
		--clients_counter;
		std::cout << "Clients in queue: " << clients_counter << "\n";
	}
}

int main() {
	std::cout << "Очередь клиентов: " << std::endl;
	std::thread t1(clientsThread);
	std::thread t2(operatorTread);
	t1.join();
	t2.join();
	return 0;
}