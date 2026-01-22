#include <iostream>
using namespace  std;

//  \n al principio: baja una linea y luego imprimie hello
// \n al final: imprime Hello y luego baja una linea
// \n  al prinicpio y al final: aisla el texto completamente


string getSearchQuery()
{
  cout << " Search Engine Mini\n";
  cout << "-----------------------------\n";
 cout << "🔍 Type a word to Search: ";

  string query;
  getline(cin, query);
  return query;
}

bool userWantsToExit(string input)
{
  
  transform(input.begin(), input.end(), input.begin(), ::tolower);
  // devuelve true si INPUT es igual a EXIT
  return input == "exit";

}

int main()
{

bool  is_loop_active = true;

  while (is_loop_active)
  {
    string query = getSearchQuery();

    // si userWantsToExit devuelve true sal del programa 
    if (userWantsToExit(query))
    {
      cout << "👋🏻 Exiting Search Engine Mini... \n";
      is_loop_active = false;
    }

  }

  

  
return 0;
}