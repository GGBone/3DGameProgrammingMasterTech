#include <math.h>
namespace Math
{
	typedef struct Point_2D_t
	{
		union
		{
			float M[2];
			struct
			{
				float x;
				float y;
			};
		};
		Point_2D_t(float _x, float _y)
		{
			x = _x;
			y = _y;
		}
	
	}Point2D,*Point2D_Ptr;

	inline float dot(Point2D& x, Point2D& y)
	{
		float c = x.x * y.x + x.y * y.y;
		return c;
	}
	inline Point2D cross(Point2D& x, Point2D& y)
	{
		Point2D c = { 0, 0 };
		return c;
	}
}

