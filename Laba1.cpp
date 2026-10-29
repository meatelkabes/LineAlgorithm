/********************************
* Автор:    Карнаухов Фёдор     *
* Название: Линейные алгоритмы  *
* Вариант:  3                   *
********************************/

#include <iostream>
#include <math.h>

using namespace std;

int main() {

  const double PI = 3.141592;
  double alpha, initialVelocity, acceleration, radianAlpha, flightTime, maximumFlightHeight, maximumFlightRange, radiusOfCurvatureOfTheStartOfTheTrajectory, radiusOfCurvatureOfTheVertexTrajectories;

  cout << "alpha = ";
  cin >> alpha;

  cout << "initial_velocity = ";
  cin >> initialVelocity;

  cout << "acceleration = ";
  cin >> acceleration;

  radianAlpha = alpha * PI / 180.0;
  flightTime = (2.0 * initialVelocity * sin(radianAlpha) / acceleration);
  maximumFlightHeight = (pow(initialVelocity, 2.0) * pow(sin(radianAlpha), 2.0)) / (2.0 * acceleration);
  maximumFlightRange = (pow(initialVelocity, 2.0) * sin(2.0 * radianAlpha)) / (acceleration);
  radiusOfCurvatureOfTheStartOfTheTrajectory = (pow(initialVelocity, 2.0)) / (acceleration * cos(radianAlpha));
  radiusOfCurvatureOfTheVertexTrajectories = (pow(initialVelocity, 2.0) * pow(cos(radianAlpha), 2.0)) / acceleration;

  cout << "--------------------------------------------------------------------------------- " << endl
	   << "flight time = " << flightTime << endl
	   << "maximum flight height = " << maximumFlightHeight << endl
	   << "maximum flight range = " << maximumFlightRange << endl
	   << "radius of curvature of the start of the trajectory = " << radiusOfCurvatureOfTheStartOfTheTrajectory << endl
	   << "radius of curvature of the vertex trajectories = " << radiusOfCurvatureOfTheVertexTrajectories << endl;


}