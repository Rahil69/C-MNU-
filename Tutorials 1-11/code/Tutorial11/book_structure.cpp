#include <iostream>
#include <string>
using namespace std;

struct Book {
        string title;
        int id;
        string author;
        string edition;
        int pages;
        float price;
    };

int main() {
    Book books[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for book " << (i + 1) << endl;
        cout << "Title: ";
        getline(cin, books[i].title);
        if (books[i].title.empty()) getline(cin, books[i].title);
        cout << "ID: ";
        cin >> books[i].id;
        cin.ignore();
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Edition: ";
        getline(cin, books[i].edition);
        cout << "Pages: ";
        cin >> books[i].pages;
        cout << "Price: ";
        cin >> books[i].price;
        cin.ignore();
    }
    for (int i = 0; i < 3; i++) {
        cout << "Book " << (i + 1) << endl;
        cout << books[i].title << endl;
        cout << books[i].id << endl;
        cout << books[i].author << endl;
        cout << books[i].edition << endl;
        cout << books[i].pages << endl;
        cout << books[i].price << endl;
    }
    return 0;
}
