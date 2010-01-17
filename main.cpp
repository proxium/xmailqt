/* 
 * File:   main.cpp
 * Author: bmr
 *
 * Created on January 17, 2010, 1:43 PM
 *
 * This file is going to be hosted in Github.com
 */
#include <stdlib.h>
#include <iostream>
#include <string>

/*#include <iostream>*/
#include <vector>
using namespace std;

/*int main(int argc, char** argv) {
     vector<int> justavector(5);
     justavector.push_back(42);
     cout << "Vector size is " << justavector.size() << endl;
     return (EXIT_SUCCESS);
} */


/** @brief class Main utilisée pour lancer le programme principal.

    La classe Main affiche un menu qui permet aux clients d'éffectuer des achats à distance.
    @author BM Rateb
    @date 21 juin 2009, 14:58

    @param argc - premier parametre
    @param argv - deuxième parametre
    @return Int: déterminant ainsi le success ou l'échec de l'éxecution
 */
int main(int argc, char** argv) {
 vector<int> justavector(5);
    int s=justavector.size();
    cout<<"Vector size is " << s << endl;
    return (EXIT_SUCCESS);
}

