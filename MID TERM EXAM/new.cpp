#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

class WebBrowser {
public:
    list<string> addresses;
    list<string>::iterator current;

    WebBrowser() {
        current = addresses.begin();
    }

    void visitAddress(const string& address) {
        auto it = find(addresses.begin(), addresses.end(), address);
        if (it != addresses.end()) {
            current = it;
            cout << *current << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }

    void moveNext() {
        if (next(current) != addresses.end()) {
            ++current;
            cout << *current << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }

    void movePrev() {
        if (current != addresses.begin()) {
            --current;
            cout << *current << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }
};

int main() {
    WebBrowser browser;

    string address;
    while (cin >> address && address != "end") {
        browser.addresses.push_back(address);
    }

    int Q;
    cin >> Q;

    string command, param;
    cin >> command >> param;
    browser.visitAddress(param);

    for (int i = 1; i < Q; ++i) {
        cin >> command;
        if (command == "next") {
            browser.moveNext();
        } else if (command == "prev") {
            browser.movePrev();
        } else if (command == "visit") {
            cin >> param;
            browser.visitAddress(param);
        }
    }

    return 0;
}
