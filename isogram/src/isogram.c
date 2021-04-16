#include "isogram.h"


bool is_isogram(const char phrase[]){
    if(phrase == NULL) //NULL pointers return false
        return false;

    for(int i = 0; phrase[i] != '\0'; i++){ //Traverse string until null '\0' char
        for(int j = 0; phrase[j] != '\0'; j++){
            if(i != j){ // only test different chars
                if(isalpha((unsigned char) phrase[j])){ // check if is a letter
                    if(phrase[i] == tolower((unsigned char) phrase[j]) || phrase[i] == toupper((unsigned char) phrase[j])){
                        return false;
                    }
                }
            }
        }
    }
     
    // If traversed all letters, it's an isogram!
    return true;
}