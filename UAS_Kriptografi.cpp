#include <iostream>
#include <sstream>
using namespace std;

string xorEncryption(string data, string key) {
    int data_size = data.size();
    int key_size = key.size();
    for (int i = 0; i < data_size; i++) {
        data[i] = data[i] ^ key[i % key_size];
    }

    stringstream ss;
    ss << hex << data;
    return ss.str();
}



    int data_size = data.size();
    int key_size = key.size();
    for (int i = 0; i < data_size; i++) {
        data[i] = data[i] ^ key[i % key_size];
    }
    return data;
    string xorDecryption(string data, string key) {
    stringstream ss;
    ss << std::hex << data;
    ss >> data;
}

int main() {
    string data;
    string key;

    cout << "Masukkan data yang ingin dienkripsi: ";
    getline(cin, data);

    cout << "Masukkan kunci enkripsi: ";
    getline(cin, key);

    cout << "1. Enkripsi" << endl;
    cout << "2. Dekripsi" << endl;
    cout << "Pilih menu: ";
    int menu;
    cin >> menu;

    switch (menu) {
        case 1: {
            string encrypted_data = xorEncryption(data, key);
            cout << "Data setelah dienkripsi: " << encrypted_data << endl;
            break;
        }
        case 2: {
            string decrypted_data = xorDecryption(data, key);
            cout << "Data setelah didekripsi: " << decrypted_data << endl;
            break;
        }
        default: {
            cout << "Menu tidak valid" << endl;
            break;
        }
    }
    return 0;
}
