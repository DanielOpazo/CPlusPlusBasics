class Vector {
	public:
		Vector(int s) : elem{new double[s]}, sz{s} {}
		double& operator[](int i);
		int size();
	private:
		double * elem;
		int sz;
};
