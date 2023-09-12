#include <iostream>
#include <vector>

std::vector <std::string> one = { "test_string1", "test_string2" };
std::vector <std::string> two;

template < class T >
constexpr std::remove_reference_t<T>&& move_vectors(T&& one) noexcept;
void move_vectors(...) {
	two = std::move(one);
}

int main() {
	move_vectors();
	return 0;
}

