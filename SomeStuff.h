#ifndef _SOMESTUFF_
#define _SOMESTUFF_

#include <ostream>
#include <stdexcept>
#include <string>





namespace CS52 {
    class Something {
    public:



        virtual int size() const = 0;
        virtual int capacity() const = 0;
        virtual std::string type() const = 0;
        
        virtual ~Something() {}


    };




    class SomeStuff : public Something {
    private:
        int _size = 0;
        int _capacity = 0;
        int* _data = nullptr;

        
        
       /* int backup_size_ = 0;
        int backup_capacity_ = 0;
        int* _backup = nullptr;*/



    public:
        SomeStuff();
        SomeStuff(int size, int value);
        SomeStuff(const SomeStuff& other);
        SomeStuff(SomeStuff&& other) noexcept;
        SomeStuff& operator=(const SomeStuff& other);
        SomeStuff& operator=(SomeStuff&& other) noexcept;
       
       
        ~SomeStuff();




        int& at(int index) const;
        void clear();
        // void backup();
        int* data() const;
        bool empty() const;
        void push_back(int element);
        void pop_back();
        int& operator[](int index) ;
        SomeStuff operator+(const SomeStuff& rhs);

       
       
       
        
        


        friend std::ostream& operator<<(std::ostream& out, const SomeStuff& s);
        
        
        int size() const override;
        int capacity() const override;
        std::string type() const override;



        

            
            
            
       


    };

}























#endif
