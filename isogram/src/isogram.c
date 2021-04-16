#include "isogram.h"


bool is_isogram(const char phrase[]){
    if(phrase == NULL) //NULL pointers return false
        return false;
    // Supposing all letters are in the English alphabet
    bool letter_present[26] = {false};
    for(size_t i = 0; phrase[i] != '\0'; i++){
        if(isalpha((unsigned char) phrase[i])){ 
            if(letter_present[tolower((unsigned char) phrase[i]) - 'a'])
                return false;
            else
                letter_present[tolower((unsigned char) phrase[i]) - 'a'] = true;
        }
    }
    return true; // If traversed all letters, it's an isogram!
}