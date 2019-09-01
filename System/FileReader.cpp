
// // THIS IS A WRITE TO FILE
#include <iostream>
#include <fstream>
using namespace std;

// int main () {
//   ofstream myfile;
//   myfile.open ("example.txt");
//   myfile << "Writing this to a file.\n";
//   myfile.close();
//   return 0;
// }


// // THIS IS A READ FROM FILE
// // reading a text file
// #include <iostream>
// #include <fstream>
// #include <string>
// using namespace std;

// void ReadFile (ifstream file) {
//     string line;
    
//     if(file.is_open()){
//         while(getline(file, line)){
//             cout << line << '\n';
//         }
//         file.close();
//     }
//     else{
//         cout << "Failed to open file";
//         // return false;
//     }
//     // return true;
// }

// int main (){
//     ifstream f;
//     ReadFile(f.open("init_file_example.csv"));
    
//     return 0;
// }


int main () {
    bool Headline = true;
    ifstream file ( "init_file_example.csv" ); // declare file stream: http://www.cplusplus.com/reference/iostream/ifstream/
    string value;
    while ( file.good() ) 
    {
        getline ( file, value, ',' ); // read a string until next comma: http://www.cplusplus.com/reference/string/getline/
        
        // cout << "TEST: " << string(value);
        if(Headline){
            Headline = false;
        }

        else{
            cout << string(value, 0, value.length()); // display value removing the first and the last character from it
        }
            
        }
    return 0;
}