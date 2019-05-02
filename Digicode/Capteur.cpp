#include "Capteur.h"
#include "kbhit.h"

using namespace std;

nsDigicode::Capteur::Capteur()
{

}

int nsDigicode::Capteur::detecter()
{
     return _kbhit();
}
