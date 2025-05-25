#include <iostream>
#include <string>
using namespace std;

enum EyeColor { Brown, Black, Blue, Green, Gray};

int main(){

    string inEyeColor;
    char choice;
    do {
        cout << "Enter one of the eye color:- Blue, Green, Black, Brown, Gray :" ;
        cin >> inEyeColor;

        EyeColor eyeColor;
        bool valid = true;

        if (inEyeColor == "Brown" || inEyeColor == "brown"){    
            eyeColor = Brown;
        }
        else if (inEyeColor == "Black" || inEyeColor == "black"){
            eyeColor = Black;
        }
        else if (inEyeColor == "Blue" || inEyeColor == "blue"){
            eyeColor = Blue;
        }
        else if (inEyeColor == "Green" || inEyeColor == "green"){
            eyeColor = Green;
        }
        else if (inEyeColor == "Gray" || inEyeColor == "gray"){
            eyeColor = Gray;
        }
        else {
            cout << "Unknown, not valid eye color1." << endl;
            valid = false;
        }

        if (valid){
            switch (eyeColor) {
                case Brown: 
                    cout << "45% of the world has Brown eyes." << endl;
                    break;
                case Black: cout << "40% of the world has Black eyes." << endl;   
                    break;
                case Blue: cout << "10% of the world has Blue eyes." << endl;   
                    break;
                case Green: cout << "2% of the world has Green eyes." << endl;   
                    break;
                case Gray: cout << "3% of the world has Gray eyes." << endl;   
                    break;
                    default: cout << "Unknown, not valid eye color." << endl;
                    break;
                }
        }
        cout << "\nDo you want to try again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
    }