#include <iostream>
#include <ctime>
using namespace std;
double sign(double x) {
	if (x < 0) 	  return -1;
	
	
	if (x > 0)   return 1;
		
	
	if (x == 0)  return 0 ;
}
double RootsCount(double a, double b, double c) {
	double d = b * b - 4 * a * c;

		if (d < 0) 	  return 1;
	    if (d > 0)    return 2;
	    if (d == 0)   return 1;
		

}

double CircleS(double r) {
	double S = 3.14 * r * r; return S;


}
double RingS(double r1 ) {
	double S = 3.14 * r1 * r1; return S;
	
}
double TriangleP(double a, double h) {
	double S = a + h * 2; return S;

}


	int main() {
	srand(time(nullptr));
	setlocale(LC_ALL, "russian");
//	Proc16.
// Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения :
//	−1, если X < 0;
//  0, если X = 0;
//  1, если X > 0.		
// С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.
	/*double a, b;
	cout << " vvedite a ";
	cin >> a;
	cout << " vvedite b ";
	cin >> b;
	double s=0;
	s = sign(a) + sign(b);
	cout << " Sign(A) + Sign(B)= " << s;*/
	
	
	//Proc17.
	// Описать функцию RootsCount(A, B, C) целого типа, определяющую
	//	количество корней квадратного уравнения A·x
	//	2 + B·x + C = 0 (A, B, C — вещественные параметры, A ne ravno  0).
	//		С ее помощью найти количество корней для каждого из трех квадратных уравнений с данными коэффициентами.
	//	Количество корней определять по значению дискриминанта :
	//D = B2 − 4·A·C.
	/*double a, b, c;
	for (int i = 1; i < 4; i++) {
		cout << " vvedite a ";
		cin >> a;
		cout << " vvedite b ";
		cin >> b;
		cout << " vvedite c ";
		cin >> c;
		cout << RootsCount(a, b, c) << endl;

	}*/


	//Proc18.
	// Описать функцию CircleS(R) вещественного типа,
	//	находящую площадь круга радиуса R(R — вещественное).С помощью этой функции
	//	найти площади трех кругов с данными радиусами.
	//Площадь круга радиуса R вычисляется по формуле S = π·R^2.
	//В качестве значения π использовать 3.14.
	/*double r;
	for (int i = 1; i < 4; i++) {
		cout << " vvedite r ";
		cin >> r;
		cout << CircleS(r) << endl;
	}*/


	/*Proc19.
		Описать функцию RingS(R1, R2) вещественного типа,
		находящую площадь кольца,
		заключенного между двумя окружностями с общим центром и радиусами R1 и R2(R1 и R2 — вещественные, R1 > R2).
		С ее помощью найти площади трех колец, для которых даны внешние и внутренние радиусы.
		Воспользоваться формулой площади круга радиуса R : S = π·R^2 .В
		качестве значения π использовать 3.14.*/
	/*double r1, r2, s = 0;
	for (int i = 1; i < 4; i++) {
		cout << " vvedite r1 ";
		cin >> r1;
		cout << " vvedite r2 ";
		cin >> r2;
		s = RingS(r1) - RingS(r2);
		cout << " третья окружнасть = " << s << endl;
	}*/
	/*Proc20.
		Описать функцию TriangleP(a, h), находящую периметр равнобедренного треугольника по его основанию a и высоте h, проведенной к
		основанию(a и h — вещественные).С помощью этой функции найти
		периметры трех треугольников, для которых даны основания и высоты.
		Для нахождения боковой стороны b треугольника использовать теорему
		Пифагора :*/
	double a, h, s;
	for (int i = 1; i < 4; i++) {
		cout << " vvedite a ";
		cin >> a;
		cout << " vvedite h ";
		cin >> h;
		s = TriangleP(a, h);
		cout << " s = " << s;
	}



	}