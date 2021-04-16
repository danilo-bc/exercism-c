#include "isogram.h"


bool is_isogram(const char phrase[]){
    if(phrase == NULL) //NULL pointers return false
        return false;
    else{
        for(int i = 0; phrase[i] != '\0'; i++){ //Traverse string until null '\0' char
            for(int j = 0; phrase[j] != '\0'; j++){
                if(i != j){ // only test different chars
                    if(isalpha(phrase[j])){ // check if is a letter
                        if(phrase[i] == phrase[j]){
                            return false;
                        }
                        else if(isupper(phrase[j])){ //if uppercase, try lowercase version
                            if(phrase[i] == tolower(phrase[j]))
                                return false;
                        }
                        else if(islower(phrase[j])){ // if lowercase, try uppercase version
                            if(phrase[i] == toupper(phrase[j])){
                                return false;
                            }
                        }
                    }
                }  
            }  
        }
        // If traversed all letters, it's an isogram!
        return true;
    }
}