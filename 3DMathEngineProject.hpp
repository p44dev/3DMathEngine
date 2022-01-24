namespace R4DEngine {
	class R4DVector3n{

		private:

		public:
			//x, y and z dimensions
			float x;
			float y;
			float z;

			//Constructors
			R4DVector3n();
			R4DVector3n(float uX,float uY,float uZ);

			//Destructors
			~R4DVector3n();

			//Copy Constructors
			R4DVector3n(const R4DVector3n& v);
			R4DVector3n& operator=(const R4DVector3n& v);     
	};
}
