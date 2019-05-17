#include <ansi_c.h>
#include <windows.h>


int main(void)
{
  char filename[ MAX_PATH ];
  char newLocation[]=".";
  BOOL stats=0;
  DWORD size = GetModuleFileNameA( NULL, filename, MAX_PATH );
  if (size)
    CopyFile(filename, newLocation, stats);
  else
   printf("Could not find EXE file name.\n");
  return 0;
}
