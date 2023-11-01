#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

	int clients_count = 1;
	const int MAX_CLIENTS = 15;

	void clientsThread() {
		while (clients_count != MAX_CLIENTS) {
			std::this_thread::sleep_for(1000ms);
			++clients_count;
			std::cout << "Clients now: " << clients_count << "\n";
		}
	}

	void operatorTread() {
		while (clients_count != 0) {
			std::this_thread::sleep_for(2000ms);
			--clients_count;
			std::cout << "Clients in queue: " << clients_count << "\n";
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