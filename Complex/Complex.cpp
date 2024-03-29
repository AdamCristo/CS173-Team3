
	// Constructor (a,b)
	// Author: Adam Cristo
	// No return value.
	Complex::Complex	(const float x, float y){
		a = x;
		b = y;
	}
	
	// Accessor method setImag.
	// Author: Adam Cristo
	// Return value is none
	void Complex::setImag(double r){
		b = r;
	}
	
	// Operator != does not equal
	// Author: Adam Cristo
	// Checks if the variables are not equal to each other. 
	// Return value is the result whether true or false (bool)
	bool	Complex::operator!=	(const Complex &c) const{
		bool result;
		if (a != c.a || b != c.b)
			result = true;
		else
			result = false;
		
		return result;
	}
	
	// Operator + adding integers
	// Author: Adam Cristo
	// creates the verable and adds the integer. 
	// returns ret
	Complex	Complex::operator+	(int i) const{
		Complex ret;
		ret.a = a + i;
		ret.b = b;
		return ret;
	}
	
	// Operator - subtraction
	// Author: Adam Cristo
	// subtracts the variable by the integer
	// returns ret
	Complex	Complex::operator-	(int i) const{
		Complex ret;
		ret.a = a - i;
		ret.b = b;
		return ret;
	}
	
	// Operator * multiplication
	// Author: Adam Cristo
	// Multiplies the a times the float and the b times the float
	// Returns ret
	Complex	Complex::operator*	(const double f) const{
		Complex ret;
		ret.a = a * f;
		ret.b = b * f;
		return ret;
	}
	
	// Operator / division
	// Author: Adam Cristo
	// Checks if the variables are not 0
	// Does the complex forumula for complex number division
	// returns ret
	Complex	Complex::operator/	(const Complex &c) const{
		Complex ret;
		if (c.a == 0 && c.b == 0){
			cout << "Cannot divide by 0";
			exit(1);
		}
		ret.a = ((a*c.a)+(b*c.b))/((c.a^2)+(c.b^2));
		ret.b = ((b*c.a)-(a*c.b))/((c.a^2)+(c.b^2));
		return ret;
	}
