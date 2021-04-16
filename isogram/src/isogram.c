#include "isogram.h"


bool is_isogram(const char phrase[]){
    if(phrase == NULL)
        return false;
    else{
        unsigned int duplicates_number = 0;

        for(int i = 0; phrase[i] != '\0'; i++){
            for(int j = 0; phrase[j] != '\0'; j++){
                if(i != j)
                    if(phrase[i] == phrase[j])
                        duplicates_number++;
            }
        }

        if(duplicates_number == 0)
            return true;
        else
            return false;
    }
    
}