#include "log_duration.h"

#include <iostream>

using namespace std;

class StreamUntier {
public:
    // добавьте конструктор, деструктор
    // и дополнительные поля класса при необходимости
    StreamUntier(istream& in) {
        tied_before_ = in.tie(nullptr);
    }

    ~StreamUntier() {
        cin.tie(tied_before_);
    }

private:
    ostream* tied_before_;
};


int main(int argc, const char** argv) {
    // не забываем, что один аргумент — это название программы,
    // поэтому argc должно быть как минимум 2
    if (argc < 2) {
        cerr << "Пожалуйста, задайте как минимум 1 аргумент"s << endl;
        return 1;
    }

    int arg = std::stoi(argv[1]);

    if (arg == 1) {
        LOG_DURATION("endl"s);
        int i;
        while (cin >> i) {
            cout << i * i << endl;
        }
    }

    if (arg == 2) {
        LOG_DURATION("\\n"s);
        int i;
        while (cin >> i) {
            cout << i * i << "\n"s;
        }
    }

    if (arg == 3) {
        LOG_DURATION("\\n with tie"s);
        StreamUntier guard(cin);
        int i;
        while (cin >> i) {
            cout << i * i << "\n"s;
        }
    }
}