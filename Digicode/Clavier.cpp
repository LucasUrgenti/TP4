#include "Clavier.h"
#include "kbhit.h"

using namespace std;

nsDigicode::Clavier::Clavier()
{

}

int nsDigicode::Clavier::saisirChiffre()
{
    if (_kbhit() == 0) return -1;
    else {
        return _kbhit();
    }
}
