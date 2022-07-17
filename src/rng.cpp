#include <iostream>
#include <stdlib.h>  
#include <time.h>  


using namespace std;

int main(int argc, char *argv[]) {

    srand (time(NULL));
    
    auto valueAt = [argv, argc](int ind) mutable {
        return 
            ((ind < (argc)) ? (atoi(argv[ind])) : 1);
    };
    int vals[3] = {valueAt(1), valueAt(2), valueAt(3)};
    
    cout << to_string(
        vals[2] * (rand() % ((vals[0]-vals[1]) / vals[2])) + vals[1]
    );

}