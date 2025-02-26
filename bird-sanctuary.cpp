#include <bits/stdc++.h>
using namespace std;

class Bird{
public :
  string name;
  string species;
  string sound;
  
  Bird(string n ,string s ,string snd){
      this -> name = n;
      this -> species = s;
      this -> sound = snd;
  }
  
  void displayBirds(){
      cout << " Name : " << name << " Species : " << species << " Sound : " << sound << endl;
  }
};

class BirdSanctuary{
public :
  vector<Bird> sanc;
  
  void addBird(string name ,string species ,string sound)
  {
      for(Bird &bd : sanc){
          if(bd.name == name){
              cout << "already exists " << endl;
              return;
          }
      }
      
      sanc.push_back(Bird(name , species ,sound));
      
  }
  
  void searchBySpecies(string species){
      for(Bird &bd : sanc){
          if(bd.species == species){
                bd.displayBirds();
                return;
          }
      }
  }
  
  void removeBirds(string name ,string species){
      for(auto it = sanc.begin() ; it != sanc.end() ; it++){
          if(it -> name == name || it -> species == species){
              sanc.erase(it);
              return;
          }
      }
  }
  
  void display(){
      for(Bird &bd : sanc){
          bd.displayBirds();
      }
  }
  
};

int main(){
    
    BirdSanctuary s1;
    s1.addBird("Common Raven" , "Corvus corax" ,"cronk");
    s1.addBird("Barn Owl" ,"Tyto alba" ,"hissing");
    s1.addBird("Hummingbird" ,"Archilochus colubris" ,"buzzing sound");
    s1.removeBirds("Hummingbird " ,"Archilochus colubris");
    // s1.searchBySpecies("Tyto alba");
    s1.display();
    
    return 0;
}