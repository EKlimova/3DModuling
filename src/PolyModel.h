#pragma once

#include <vector>
#include "Point.h"
#include "Triangle.h"
namespace Modelling
{
	class PolyModel {
		
		std::vector<Point> Points;
		std::vector<Triangle> Triangles;
	};

}

