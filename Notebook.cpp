#include "Notebook.hpp"
#include "Direction.hpp"

#include <iostream>
#include <string>
#include <stdexcept>


using namespace std; 
using ariel::Direction;

namespace ariel
{
    void check_input(int num_page, int row, int num_col, Direction direction, int text_length)
    {
        if(direction == Direction::Horizontal && num_col + text_length > 100)
        {
            throw runtime_error("limit is 100 letters for row");
        }
        if(num_page < 0 || row < 0 || num_col < 0)
        {
            throw runtime_error("only positive numbers to: page, row, col");
        }
    }
    void Notebook::write(int num_page,  int row,  int column, Direction direction, string text)
    {
        check_input(num_page, row, column, direction, int(text.length()));
    }
    string Notebook::read( int num_page,  int row,  int column, Direction direction,  int text_to_read)
    {
        check_input(num_page, row, column, direction, text_to_read);
        return "some_text";
    }
    void Notebook::erase(int num_page,  int row,  int column, Direction direction,  int text_to_read)
    {
        check_input(num_page, row, column, direction, text_to_read);
    }
    void Notebook::show( int num_page) { }

}