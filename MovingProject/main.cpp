#include <iostream>
#include <vector>

template < class T >
std::vector<T> move_vectors(std::vector<T> first) {
	return  std::move(first);
}

int main() {
	std::vector<std::string> one = { "test_string1", "test_string2" };
	std::vector<std::string> two;
	two = move_vectors(one);
	for (auto& i : two)
		std::cout << i << std::endl;
	return 0;
}
