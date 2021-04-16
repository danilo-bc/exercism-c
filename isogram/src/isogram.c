#include "isogram.h"


bool is_isogram(const char phrase[]){
    if(phrase == NULL) //NULL pointers return false
        return false;
        
    // Supposing all letters are in the English alphabet
    bool letter_present[26] = {false};
    for(size_t i = 0; phrase[i] != '\0'; i++){ //Traverse string until null '\0' char
        if(isalpha((unsigned char) phrase[i])){ // Check if it's a letter
            // use letter_present to check if it was already found
            // if true, return false (not isogram)
            // if false, turn into true and carry the search
            if(letter_present[(unsigned char) tolower(phrase[i]) - 'a']){
                return false;
            }
            else{
                letter_present[(unsigned char) tolower(phrase[i]) - 'a'] = true;
            }
        }
    }
     
    // If traversed all letters, it's an isogram!
    return true;
}