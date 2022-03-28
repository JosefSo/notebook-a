#include <iostream>
#include <string>
#include "Direction.hpp"
#include "Page.hpp"
#include <stdexcept>

using namespace std;

namespace ariel
{
    class Notebook
    {
        private:
            // something
        public:
            Notebook(){ }

            void write(int page,  int row,  int col, Direction dir, string s);
            string read( int page,  int row,  int col, Direction dir,  int numOfChars);
            void erase( int page,  int row,  int col, Direction dir,  int numOfChars);
            void show( int page);

    };

}