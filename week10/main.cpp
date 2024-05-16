#include <iostream>
#include <cstring>

using namespace std;

/* A1
char* concat(const char* str1, const char* str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    size_t resultSize = len1 + len2 + 1;

    char* result = new char[resultSize];

    strcpy(result, str1);

    strcat(result, str2);

    return result;
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";

    char* result = concat(str1, str2);

    cout << "Concatenated string: " << result << endl;

    delete[] result;

    return 0;
}

/*A2
int* p = new int;
int* p2 = p;
*p = 10;
delete p;
*p2 = 100;
cout << *p2; // con trỏ p2 vẫn trỏ đến vùng nhớ đã được giải phóng
delete p2; // giải phóng thêm 1 lần nữa

/* A4
int* createLocalVariable() {
    int localVar = 5;
    int* ptr = &localVar;
    return ptr;
}

int main() {
    int* dynamicPtr = createLocalVariable();
    cout << *dynamicPtr << endl;   // Truy cập vào vùng nhớ không hợp lệ
    return 0;
}

/* C1
char* reverse_string(const char* str) {
    int length = strlen(str);
    char* result = new char[length + 1];
    for (int i = 0; i < length; i++) {
        result[i] = str[length - i - 1];
    }
    result[length] = '\0';
    return result;
}

char* concatenate_strings(const char* str1, const char* str2) {
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    char* result = new char[length1 + length2 + 1];
    strcpy(result, str1);
    strcat(result, str2);
    return result;
}

int main() {
    const char* str = "Hello, world!";
    const char* reversed_str = reverse_string(str);
    const char* concatenated_str = concatenate_strings(str, reversed_str);

    cout << str << endl;
    cout << reversed_str << endl;
    cout << concatenated_str << endl;

    delete[] reversed_str;
    delete[] concatenated_str;

    return 0;
}
