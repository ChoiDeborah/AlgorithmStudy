#include <string>

using namespace std;

int solution(int num, int k) {
    string temp(to_string(num));
    int pivot = temp.find(to_string(k));
    return (pivot == string::npos) ? pivot : pivot + 1;
}