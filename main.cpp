#include <iostream>
#include <3DMathEngineProject.hpp>
#include <vector>


void printVectorProperties(R4DEngine::R4DVector3n vec) {
    std::cout << vec.x << std::endl;
}

void printVectorsProperties(std::vector<R4DEngine::R4DVector3n*> v) {
	for(auto& vec : v) {
		std::cout << "vector x: " << vec->x << std::endl;
		std::cout << "vector y: " << vec->y << std::endl;
		std::cout << "vector z: " << vec->z << std::endl;
		std::cout << "----------------------------------" << std::endl;
	} 
}

R4DEngine::R4DVector3n* getNewSumVectorOfTwo(R4DEngine::R4DVector3n* v1,
		R4DEngine::R4DVector3n* v2) {
	return new R4DEngine::R4DVector3n(v1->x + v2->x,
					  v1->y + v2->y,
					  v1->z + v2->z);

}

int main(int argc, const char * argv[]) {

    // Declare two vectors. Notice that I'm referencing the namespace
    // R4DEngine::R4DVector3n vector1(2,3,1);
    // R4DEngine::R4DVector3n vector2(1,2,0);


    R4DEngine::R4DVector3n* vector1 = new R4DEngine::R4DVector3n(1,2,0);
    R4DEngine::R4DVector3n* vector2 = new R4DEngine::R4DVector3n(1,2,0);

    std::vector<R4DEngine::R4DVector3n*> vs; 

    for (int i = 0; i < 50; i++) {
	    R4DEngine::R4DVector3n* v = 
		    new R4DEngine::R4DVector3n(i + 1, i + 2 , i + 3);
	    vs.push_back(v);
    }

    printVectorsProperties(vs);
    auto newVector = getNewSumVectorOfTwo(vector1, vector2);
    std::cout << newVector->x << std::endl;

    for(auto& vec : vs) {
        delete vec; 
        vec = nullptr;
    }
    delete vector1;
    delete vector2;
    vector1 = nullptr;
    vector2 = nullptr;

    return 0;
}
