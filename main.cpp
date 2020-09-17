using namespace std;

#include <iostream>
#include <vector>

class AverageOfSubarrayOfSizek {
public:
    AverageOfSubarrayOfSizek(int i, vector<int> vector) {

    }

    static vector<double> findAverages(int K, const vector<int> &arr) {
        vector<double> result(arr.size() - K + 1);
        for (int i = 0; i <= arr.size() - K; i++) {
            double sum = 0;
            for (int j = i; j < i + K; j++) {
                sum += arr[j];
            }
            result[i] = sum / K;

        }
        return result;
    };


};

int main() {

    vector<double> result1 = AverageOfSubarrayOfSizek::findAverages(5, vector < int > {1, 3, 5, 8, 9, 15});

    for (double d : result1) {
        cout << d << " ";
    }
    cout << std::endl;
    return 0;
}
