#ifndef SPHERE_HH_
# define SPHERE_HH_

# include "shape.hh"
# include "sphereshadow.hh"

#include <GL/glut.h>
class Sphere : public Shape
{
public:
   Sphere(const ShapeInfo& si,
         VariableManager& vm,
         Trial* father);
  ~Sphere();

  void React2input(Status&,
                   const datas&,
                   int,
                   ms);

  void Display();
  void DisplayMonitor();
  void Reset();
  void RandomPosXZ();
  void updateVelo(int rep);
  double z() { return _z->value; }
  float lead(){ return _lead->value;}
  int key(){ return _key->value;}
  string getAttrsToString();

protected:

  float _angleX;
  float _angleY;
  float _angleZ;

  float _initX;
  float _initY;
  float _initZ;

  float _angleV; 
  float RotAxe[2];
  
  Variable* _randomX;
  Variable* _randomZ;

  Variable* _slices;
  Variable* _stacks;
  Variable* _radius;

  Variable* _veloX;
  Variable* _veloY;
  Variable* _veloZ;
  
  float _gainX;
  float _gainY;
  float _gainZ;

  Variable* _z;
  
  Variable* _key;
  Variable* _gain;
  Variable* _action;
  Variable* _lead;

  SphereShadow* _shadow;

};


#endif
