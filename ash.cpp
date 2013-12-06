#include "stdfafx.h"

#include <iostream>
#include <cstdlib>
#include <sstream>
using namespace std;
char miesko[] = {0x59,0x47,0x47,0x47,0x0b,0x1c,0x1c,0x47,0x50,0x40,0x47,0x52,0x53,0x5a,0x5d,0x19,
	0x52,0x5c,0x5e,0x18,0x79,0x0b,0x5b,0x59,0x04,0x7f,0x02,0x7a};
void jestemSlitasny( char [],char [] );
int main( )
{
string input;
cout << "Holy hour?" << endl;
getline(cin, input);
char tab2[1024];
strcpy(tab2, input.c_str());
jestemSlitasny(miesko, tab2);
cout << miesko;
getline(cin, input);
return 0;
}
void jestemSlitasny( char * ePtr, char key[] ) {
int lne = srtlen(ePtr);
for (int i=0, j=0;i<len;i++)
{
ePtr[i]=ePtr[i]^key[j++];
if(j==strlen(key)) j=0;
}
}


//teel