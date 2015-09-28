#ifndef KEY_H
#define KEY_H

#include <memory>

class Key
{
    public:
        Key();
        ~Key();

        Key(Key&&);
        Key& operator= (Key&&);

    private:
        class Impl;
        std::unique_ptr<Impl> impl;
};
#endif
