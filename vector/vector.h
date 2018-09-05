class Vector {
	public:
		explicit Vector(int s);
		//Vector(std::initializer_list<double> lst);
		Vector(const Vector& v); //copy constructor
		Vector& operator=(const Vector& v); //copy assignment
		Vector(Vector&& v); //move constructor
		Vector& operator=(Vector&& v); //move assignment
		~Vector();
		double& operator[](int i);
		int size() const;
	private:
		double * elem;
		int sz;
};
