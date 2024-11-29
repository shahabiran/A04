


#include "SomeStuff.h"
#include <iostream>




namespace CS52 {

    SomeStuff::SomeStuff() : _size(0), _capacity(0), _data(nullptr) {}

    SomeStuff::SomeStuff(int size, int value) : _size(size), _capacity(size), _data(new int[size])
    {

        for (int i = 0; i < _size; i++) {
            _data[i] = value;
        }
    }
    SomeStuff::SomeStuff(const SomeStuff& other) : _size(other._size), _capacity(other._capacity), _data(new int[_capacity])
    {

        for (int i = 0; i < _size; ++i) {
            _data[i] = other._data[i];

        }
        std::cout << "Size: " << _size << ", Capacity: " << _capacity << std::endl;

    }
    SomeStuff::SomeStuff(SomeStuff&& other) noexcept : _size(other._size), _capacity(other._capacity), _data(other._data) {
        other._size = 0;
        other._capacity = 0;
        other._data = nullptr;
    }
    SomeStuff& SomeStuff::operator=(const SomeStuff& other) {
        if (this == &other) {
            return *this;
        }



        delete[] _data;


        _size = other._size;
        _capacity = other._capacity;


        _data = new int[_capacity];


        for (int i = 0; i < _size; ++i) {
            _data[i] = other._data[i];
        }
        std::cout << "Size: " << _size << ", Capacity: " << _capacity << std::endl;

        return *this;

    }

    SomeStuff& SomeStuff::operator=(SomeStuff&& other) noexcept {

        if (this != &other) {
            delete[] _data;

            _size = other._size;
            _capacity = other._capacity;
            _data = other._data;












            other._size = 0;
            other._capacity = 0;
            other._data = nullptr;
        }

        return *this;
    }
    SomeStuff::~SomeStuff()

    {
        delete[] _data;
        //        delete[] _backup;


    }


    int& SomeStuff::at(int index) const {
        if (index < 0 || index >= _size) {
            throw std::out_of_range("index out of bounds" + std::to_string(index));
        }
        return _data[index];

    }

    void  SomeStuff::clear() {
        _size = 0;

    }

    /*void  SomeStuff::backup() {


        delete[] _backup;

        backup_size_ = _size;
        backup_capacity_ = _capacity;
        _backup = new int[backup_capacity_];
        for (int i = 0; i < backup_size_; i++) {
            _backup[i] = _data[i];
        }
    }*/

    int* SomeStuff::data() const {
        return _data;
    }

    bool  SomeStuff::empty() const {
        return _size == 0;

    }

    void SomeStuff::push_back(int element) {

        std::cout << "Before push: Size = " << _size << ", Capacity = " << _capacity << std::endl;


        if (_size == _capacity) {

            int new_cap = (_capacity == 0) ? 1 : _capacity * 2;
            int* new_data = new int[new_cap];


            for (int i = 0; i < _size; ++i) {

                new_data[i] = _data[i];
            }

            delete[] _data;
            _data = new_data;
            _capacity = new_cap;

            std::cout << "Resized: New Capacity = " << _capacity << std::endl;
        }
        _data[_size] = element;
        ++_size;
       


    }


    void  SomeStuff::pop_back() {
        if (_size > 0) {
            --_size;
        }
    }











    int& SomeStuff::operator[](int index) {
        
        return _data[index];

    }






    SomeStuff  SomeStuff::operator+(const SomeStuff& rhs) {



        SomeStuff result(_size + rhs._size, 0);


        for (int i = 0; i < _size; ++i) {
            result._data[i] = _data[i];


        }


        for (int i = 0; i < rhs._size; ++i) {
            result._data[_size + i] = rhs._data[i];

        }



        result._size = _size + rhs._size;

        //result._capacity = std::max(_capacity, rhs._capacity);
        return result;
    }

    std::ostream& operator<<(std::ostream& out, const SomeStuff& s) {
        for (int i = 0; i < s._size; ++i) {
            out << s._data[i] << " ";

        }
        return out;
    }



    int SomeStuff::size() const {
        return _size;

    }
    int SomeStuff::capacity() const {
        return _capacity;

    }
    std::string SomeStuff::type() const {
        return "SomeStuff";
    }
}
