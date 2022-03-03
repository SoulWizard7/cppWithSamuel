#pragma once

using namespace std;

//class String {
//    char* buffer;
//    size_t _size;
//    size_t _capacity;
//public:
//    String();
//    String(const char* cstring);
//    String(const String& source);               // Copy constructor
//    String(const String&& source) noexcept;       // Move constructor
//    String& operator=(const String& other);       // Copy assignment
//    String& operator=(const String&& other) noexcept; // Move assignment
//    ~String();
//
//    // Inspectors
//    size_t size() const;            // make this inline
//    size_t length() const;            // make this inline
//    size_t capacity() const;        // make this inline
//    bool empty() const;            // make this inline
//
//    // Access raw data
//    const char* c_string() const;        // make this inline
//    char* data();                // make this inline
//    char operator[](size_t index) const;     // make this inline
//    char& operator[](size_t index);     // make this inline
//    char& at(size_t index);            // make this inline, check index and throw exception if invalid
//
//    String operator+(const String& other) const;
//    String& operator+=(const String& other) const;
//
//    void append(const char* cstring);
//    void insert(size_t index, const char* input, size_t t_index = 0, size_t count = 0);
//};