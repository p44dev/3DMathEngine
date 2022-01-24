#include <3DMathEngineProject.hpp>

namespace R4DEngine {

//constructor
    R4DVector3n::R4DVector3n():x(0.0),y(0.0),z(0.0){};

    R4DVector3n::R4DVector3n(float uX,float uY,float uZ):x(uX),y(uY),z(uZ){}

//destructor
    R4DVector3n::~R4DVector3n(){}

//copy constructor     
    R4DVector3n::R4DVector3n(const R4DVector3n& v):x(v.x),y(v.y),z(v.z){}

    R4DVector3n& R4DVector3n::operator=(const R4DVector3n& v){

        x=v.x;
        y=v.y;
        z=v.z;

        return *this;

    }


    //R4DVector3n R4DVector3n::operator+(const R4DVector3n& v) {
    //        //Returns a third vector representing the addition of two 3D vectors
    //        return R4DVector3n(x+v.x,y+v.y,z+v.z);
    //}


}
