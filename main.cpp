#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

// Concept

void TestInt(const int number) {
    cout << number << endl;
}

template<typename T>
void TestTemplate(const T t) {
    cout << t << endl;
}

// 1) Requires Clause(절)
template<typename T>
requires std::integral<T>
void TestConcept1(T t) {
    cout << t << endl;
}

// 2) Trailing Requires Clause (뒤에 붙는 ~)
template<typename T>
void TestConcept2(T t) requires std::integral<T> {
    cout << t << endl;
}

// 3) Constrained Template Parameter (강요된)
template<std::integral T>
void TestConcept3(T number) {
    cout << number << endl;
}

// 4) Abbreviated Function Template
void TestConcept4(std::integral auto number) {
    cout << number << endl;
}

class GameObject {

};

class Knight : public GameObject {}

template<typename T>
requires std::derived_from<T, GameObject>
void TestDerived(T* object) {
}

template<typename T>
concept MyConcept = !std::is_integral_v<T>  && std::derived_from<T, GameObject>;

template<typename T>
concept Addable = requires(T a, T b)
{
    a + b; // a + b가 가능해야함
};

template<typename T>
concept Equality = requires(T a, T b)
{
    {a == b} -> std::convertible_to<bool>;
    {a != b} -> std::convertible_to<bool>;
};

template<typename T>
concept Integral = std::is_integral_v<T>;

template<typename T>
concept SignedInt = Integral<T> && std::is_signed_v<T>;

int main() {
    return 0;
}
