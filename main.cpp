#include <iostream>

using namespace std;
class rectangle{
	private:
		int length,width;
		public:
			rectangle( int l=0,  int w=0){
				
				length=l;
				width=w;}
				
				int area()
		{int area=length*width;
		return area;
		}
			int perimeter()
		{int perimeter=2*(length+width);
		return perimeter;
		}
		int getlength()
		{return length;
		}
		int getwidth()
		{return width;
		}
};

int main() {
	rectangle r(5,9);
	cout<<"Length is "<<r.getlength()<<endl;
		cout<<"Width is "<<r.getwidth()<<endl;

		cout<<"Area is "<<r.area()<<endl;
		cout<<"perimeter is "<<r.perimeter()<<endl;

	return 0;
}
