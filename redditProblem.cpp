# include <iostream>
# include <cstdlib>

int main(){
    bool solved = false;
    while(!solved){
        int firstNum = rand() % 900 + 100;
        int secondNum = rand() % 90 + 10;
        int equals = firstNum * secondNum;

        //Digits of each number
        int digits[9] = {firstNum / 100, (firstNum / 10) % 10, (firstNum % 100) % 10, secondNum / 10, 
        secondNum % 10, equals / 1000, (equals / 100) % 10, (equals / 10) % 10, equals % 10};

        std::cout << digits[0] << digits[1] << digits[2] << " x " << digits[3] << digits[4] << " = "
            << digits[5] << digits[6] << digits[7] << digits[8] << "\n";

        if(equals < 1000 || equals > 9999){
            continue;
        }

        solved = true;

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(i != j){
                    if(digits[i] == digits[j] || digits[i] == 0 || digits[j] == 0){
                        solved = false;
                        break;
                    }
                }
            }
            if(!solved){
                break;
            }
        }
        if(solved){
            std::cout << "\nFound solution: ";
            std::cout << digits[0] << digits[1] << digits[2] << " x " << digits[3] << digits[4] << " = "
            << digits[5] << digits[6] << digits[7] << digits[8];
        }
    }

    

}