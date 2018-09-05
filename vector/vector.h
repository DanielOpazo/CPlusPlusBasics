class Vector {
	public:
		Vector(int s);
		//Vector(std::initializer_list<double> lst);
		Vector(const Vector& v); //copy constructor
		Vector& operator=(const Vector& v); //copy assignment
		~Vector();
		double& operator[](int i);
		int size() const;
	private:
		double * elem;
		int sz;
};
