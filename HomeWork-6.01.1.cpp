#include <iostream>
#include <chrono>
#include <thread>

void client(int& count, const int max_count) {
	for (int i = 0; i < max_count; i++) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
		count++;
        std::cout << "Queue(c): " << count << std::endl; 
	}
}

void teller(int& count) {
    do {
        std::this_thread::sleep_for(std::chrono::seconds(2));
        count--;
        std::cout << "Queue(t): " << count << std::endl;
    } while (count != 0);
}

int main()
{
    int general_count = 0;
    std::thread t1(client, std::ref(general_count), 10);
    std::thread t2(teller, std::ref(general_count));

    t1.join();
    t2.join();
}
