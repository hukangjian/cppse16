#include"Calculator.hpp"

Calculator::Calculator(int num1,char op,int num2)  {	// 构造函数的实现
	operand1 = num1;		
	operat = op; 
	operand2 = num2; 
}
int Calculator::add ()  { 		// 加运算函数的实现
	return operand1 + operand2; 
}
int Calculator::sub ()	  {		// 减运算函数的实现
	return operand1 - operand2; 
}
int Calculator::mlt ()	 {		// 乘运算函数的实现
	return operand1 * operand2; 
}
int Calculator::div ()	 {		// 除运算函数的实现
	if(operand2 == 0)
		//throw -1;
		throw DivideByZero();	// 抛掷0除异常
	return operand1 / operand2; 
}

int Calculator::calChoose_ie() {
	if (operat =='+')
		return add ();
	else if (operat =='-')
		return sub ();
	else if (operat =='*')
		return mlt ();
	else if (operat =='/')
			 return div ();
	else {
		std::cout << "\n操作符输入错误!";
		exit (1);
	}
}
int Calculator::calChoose_sc() {
	switch (operat)  {
	case '+':
		return add ();break;
	case '-':
		return sub ();break;
	case '*':
		return mlt ();break;
	case '/':
		return div ();break;
	default:
		std::cout << "\n操作符输入错误!";
		exit (1);
	}
}

int Calculator::calChoose_exp() {
	switch (operat)  {
	case '+':
		return add ();break;
	case '-':
		return sub ();break;
	case '*':
		return mlt ();break;
	case '/':
		try{
			if(operand2 == 0)
				throw -1;	// 抛掷0除异常，用一个整数表示
			else{
				return div ();break;
			}
		}
		catch (int){			// 捕获整数类型异常
			cerr << "除数为0" << endl;
			exit (1);
		}
	default:
			   cout << "\n操作符输入错误!";
			   exit (1);
	}
} 
int Calculator::calChoose_exp1() {
	try{				// 检测异常
		switch (operat) {
		case '+':
			return add ();break;
		case '-':
			return sub ();break;
		case '*':
			return mlt ();break;
		case '/':
			return div ();break;
		default:
			cout << "\n操作符输入错误!";
			exit (1);
		}
	}
	catch(int){			// 捕获并处理异常
		std::cerr<<"除数为0"<<std::endl;
		exit (1);
	}
} 

int Calculator::calChoose_exp2() {
	try{				// 检测异常
		switch (operat) {
		case '+':
			return add ();break;
		case '-':
			return sub ();break;
		case '*':
			return mlt ();break;
		case '/':
			return div ();break;
		default:
			cout << "\n操作符输入错误!";
			exit (1);
		}
	}
	catch(int){		// 捕获再抛掷
		throw;
	}
} 

int Calculator::calChoose_exp3() {
	switch (operat) {
	case '+':
		return add();break;
	case '-':
		return sub();break;
	case '*':
		return mlt();break;
	case '/':
		if(operand2== 0)
			throw -1;			// 用一个整数抛掷0除异常
		else{
			return div();break;
		}
	default:
			throw 'e';
	}
} 
int Calculator::calChoose_exp4() {
	switch (operat) {
	case '+':
		return add ();break;
	case '-':
		return sub ();break;
	case '*':
		return mlt ();break;
	case '/':
		if(operand2== 0)
			throw DivideByZeroException ( );	 // 抛出匿名异常对象
		else{
			return div ();break;
		}
	default:
			throw 'e';
	}
} 

int Calculator::calChoose_exp5() {
	try{
		switch (operat) {
		case '+':
			return add ();break;
		case '-':
			return sub ();break;
		case '*':
			return mlt ();break;
		case '/':
			return div ();break;
		default:
			throw OperationTypeNoExist();// 抛掷无操作类型异常		
		}
	}
	catch(DivideByZero){								
		throw;				// 再次抛掷
	}
	catch(OperationTypeNoExist)	{						
		throw;				// 再次抛掷
	}
} 