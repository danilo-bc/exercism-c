#include "isogram.h"


bool is_isogram(const char phrase[]){
    if(phrase == NULL) //NULL pointers return false
        return false;

    for(size_t i = 0; phrase[i] != '\0'; i++){ //Traverse string until null '\0' char
        for(size_t j = i+1; phrase[j] != '\0'; j++){
            if(isalpha((unsigned char) phrase[j])){ // check if is a letter
                if(phrase[i] == tolower((unsigned char) phrase[j]) || phrase[i] == toupper((unsigned char) phrase[j])){
                    return false;
                }
            }
        }
    }
     
    // If traversed all letters, it's an isogram!
    return true;
}