#include "key.h"
#include "make_unique.h"

class Key::Impl
{
    public:
        void do_hihi()
        {
            hihi = 9;
        }

    private:
        int hihi = 0; 
};

Key::Key()
    : impl{std::make_unique<Impl>()}
{
    impl->do_hihi();
}

Key::~Key() = default;
Key::Key(Key&&) = default;
Key& Key::operator=(Key&&) = default;
